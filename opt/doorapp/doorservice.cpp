#include <iostream>
#include "parallaxSerialRFID.h"
#include "/opt/memberdatabase/member.h"
#include "doorLCD.h"
#include "door.h"
#include "/opt/libs/doorappMacros.h"
#include <unistd.h>
#include <signal.h>
#include <cstdlib>
  
parallaxSerialRFID rfid;
doorLCD lcd;
door frontDoor(8,12,7);

void cleanExit(int signum) {
  rfid.disable();
  frontDoor.disable();
  std::cout << "Exiting..." << std::endl; 
  exit(signum);
}

int main() {
  signal(SIGINT, cleanExit);
  sleep(10);
  rfid.enable();
  std::cout << "Listening..." << std::endl;
  frontDoor.enable();
  while(1) {
    if(rfid.tagScanned()) {
      rfid.disable();
      string tag = rfid.readTag();
      member mem;
      mem.initializeFromDBByAccid(DB_LOCATION,tag);
      if (mem.isAllowed()) {
         lcd.displayAllowed(mem.getSalutation());
         frontDoor.allowEntry(1000000);
      }
      else {
        lcd.displayDenied();
        frontDoor.denyEntry(500000);
      }
      sleep(3);
      lcd.displayWelcome();
      rfid.flush();
      rfid.enable();
    }
  }
  return 0;
}

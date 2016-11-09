/******************************************************************************
 * door.h
 *
 * Interface for front door as part of RFIDACS
 *
 * Nile Mittow
 * 8/27/16
 * ***************************************************************************/

#ifndef DOOR_H
#define DOOR_H

#include "mraa.hpp"
#include <string>
#include <unistd.h>
#include "/opt/libs/doorappMacros.h"

using namespace std;

class door {

  private:
    mraa::Gpio * doorEnable;
    mraa::Gpio * doorRelay;
    mraa::Gpio * doorBuzzer;

  public:

    door();
    door(int ena, int rel, int buz);
    ~door();
   
    void allowEntry(int duration);
    void denyEntry(int duration);
    void enable();
    void disable();

}; /* end door */
#endif

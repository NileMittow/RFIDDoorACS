/******************************************************************************
 * door.cpp
 *
 * Implementation for front door as part of RFIDACS
 *
 * Nile Mittow
 * 8/27/16
 * ***************************************************************************/

#include "door.h"

using namespace std;


/*  mraa::Gpio * doorEnable;
    mraa::Gpio * doorRelay;
    mraa::Gpio * doorBuzzer;
*/

door::door() {
  doorEnable = new mraa::Gpio(8);
  doorRelay  = new mraa::Gpio(12);
  doorBuzzer = new mraa::Gpio(7);
  doorEnable->dir(mraa::DIR_OUT);
  doorEnable->write(0);
  doorRelay->dir(mraa::DIR_OUT);
  doorRelay->write(0);
  doorBuzzer->dir(mraa::DIR_OUT);
  doorBuzzer->write(0);
  doorEnable->write(1);
  return;
}

door::door(int ena, int rel, int buz) {
  doorEnable = new mraa::Gpio(ena);
  doorRelay  = new mraa::Gpio(rel);
  doorBuzzer = new mraa::Gpio(buz);
  doorEnable->dir(mraa::DIR_OUT);
  doorEnable->write(0);
  doorRelay->dir(mraa::DIR_OUT);
  doorRelay->write(0);
  doorBuzzer->dir(mraa::DIR_OUT);
  doorBuzzer->write(0);
  //doorEnable->write(1);
  return;
}

door::~door() {
  delete doorEnable;
  delete doorRelay;
  delete doorBuzzer;
  return;
}
   
void door::allowEntry(int duration) {
  //doorEnable->write(1);
  doorRelay->write(1);
  doorBuzzer->write(1);
  usleep(250000);
  doorRelay->write(0);
  usleep(duration);
  doorBuzzer->write(0);
  usleep(duration);
  return;
}

void door::denyEntry(int duration) {
  doorBuzzer->write(1);
  usleep(duration);
  doorBuzzer->write(0);
  usleep(duration);
  return;
}

void door::enable() {
  doorEnable->write(1);
  return;
}

void door::disable() {
  doorEnable->write(0);
  doorRelay->write(0);
  return;
}





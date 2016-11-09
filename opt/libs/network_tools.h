/*******************************************************************************
 * network_tools.h
 *
 * interfaces for miscellaneous functions written by me that are helpful in
 * figuring out networking stuff.
 * 
 * exec(char* cmd) function stolen from StackOverflow:
 * http://stackoverflow.com/questions/32039852/returning-output-from-bash-script-to-calling-c-function
 *
 * Nile Mittow
 * ****************************************************************************/

#ifndef NETWORK_TOOLS_H
#define NETWORK_TOOLS_H

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string exec(char* cmd);
bool isOnline();
/* Stolen from StackOverflow:
   http://stackoverflow.com/questions/32039852/returning-output-from-bash-script-to-calling-c-function */
#endif

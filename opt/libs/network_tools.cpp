/*******************************************************************************
 * network_tools.cpp
 *
 * implementations for miscellaneous functions written by me that are helpful in
 * figuring out networking stuff.
 *
 *
 * Nile Mittow
 * ****************************************************************************/

#include "network_tools.h"

/* Stolen from StackOverflow:
   http://stackoverflow.com/questions/32039852/returning-output-from-bash-script-to-calling-c-function */
string exec(char* cmd) {
    FILE* pipe = popen(cmd, "r");
    if (!pipe) return "ERROR";
    char buffer[128];
    string result = "";
    while(!feof(pipe)) if(fgets(buffer, 128, pipe) != NULL) result += buffer; 
    pclose(pipe);
    return result;
}

bool isOnline() {
  char cmdstr[] = "./isOnline.sh";
  string result = exec(cmdstr);
  if (result == "online\n") return 1;
  else return 0;
}


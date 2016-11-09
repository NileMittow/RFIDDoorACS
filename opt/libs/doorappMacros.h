/******************************************************************************
 * doorappMacros.h
 * 
 * containts the path to the members.db database
 *****************************************************************************/

#ifndef DOORAPPMACROS_H
#define DOORAPPMACROS_H
#define DB_LOCATION "/opt/memberdatabase/members.db"

#define OPENTIME 3
#define DENIED_DELAY 3

/** Welcome Message **/
#define WMSG_L1 "Welcome to"
#define WMSG_L2 "THIS PLACE"
#define WR 9
#define WG 112
#define WB 157

/** Allowed Message **/
#define AMSG_L1 "Welcome Back"
#define AMSG_L2 "Granted"
#define AR 0
#define AG 255
#define AB 0

/** Denied Message **/
#define DMSG_L1 "Access"
#define DMSG_L2 "Denied"
#define DR 255
#define DG 0
#define DB 0

/** Warning Message **/
#define WARNMSG_L1 "WARNING: BAD TAG"
#define WARNMSG_L2 "Please Register"
#define WARNR 238
#define WARNG 210
#define WARNB 2

/** After Hours Message **/
#define AFMSG_L1 "Entry Permitted"
#define AFMSG_L2 "M-F, 8am to 4pm"
#define AFR 255
#define AFG 100
#define AFB 0

/** Maker Academy Hours - in UTC **/
#define MIN_HOUR 15
#define MAX_HOUR 23

#define CURL_LIST_STRING "SECRET"
#define CURL_USER_STRING "SECRET"
#define USER_PASS "SECRET"

#endif  


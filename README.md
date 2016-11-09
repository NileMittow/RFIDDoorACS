# RFIDDoorACS
RFID Door Controller with onboard database management built aroun the Intel Edison.

As a maker space in need of a good solution for access control, this was necessity more than a bright idea for convenience.  RFID access control systems are neither new nor novel, however most commercially available systems are costly and exist within a proprietary silo for managing their access lists.
I needed a system that was:

    Relatively Cheap
    Easy to install on a wide range of already built electronically controlled door systems
    Can interface with our existing member management system
    Can update it's member list automatically
    Is not entirely reliant on an internet connection to work

This system is a result.  Currently, there are two working installations:

20161109_120109.jpg

RFIDDoorACS_Midtown.jpg
Both which manage the comings and goings of the Hacker Lab makerspace in Sacramento CA & Rocklin CA respectively.
The systems are built around the Intel Edison as it provides a stable, flexible, powerful, & small platform for interfacing with a variety of external hardware and web based APIs.
The project has been ongoing, however this project represents the current revision.  The next version's planned to be entirely on a PCB with the Edison as a bot on controller, but there are still some reliability quirks to work out.
Because the Edison is a fully functional x86 based computer, I can easily keep a local copy of our member database and run an update script periodically to pull changes.
At the risk of seeming overly-complicated for it's application, the goal of having a device with so much hardware and software is to limit the effects of software bugs:

    Local SQLite db means that the rig will keep working in the event of an internet outage
    555 based door open timer circuit means that the Edison simply needs to provide a short, one-time acknowledgement signal for the door to open
    RGB LCD display provides space for custom text to be displayed (welcome messages customized to the user, bright-red access denied messages, etc)
    Uses commonly found, cheap, 125kHz RFID tags

-------------------------------------
While I did write a script that keeps the local and cloud based databases in sync, it is specific to our Member Management System (Nexudus spaces) and it is not as robust as I want it to be yet, so I've omitted the code here.  If there is someone out there who uses this software (perhaps another makerspace) and would like the code, I'll be happy to release it in a one-on-one message/email. 
-------------------------------------
In the future, I hope to add a few more features, including:

    Access event logging
    Webcam to snap a picture of everyone who scans in
    Remote door open via webapp
    Single custom PCB that only requires the LCD, RFID, & Edison to be plugged in




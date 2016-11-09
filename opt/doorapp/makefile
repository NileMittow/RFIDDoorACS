doorservice: doorservice.cpp parallaxSerialRFID.o member.o doorLCD.o door.o
	g++ -g -o doorservice doorservice.cpp parallaxSerialRFID.o member.o doorLCD.o door.o -lmraa -lupm-i2clcd -lsqlite3 -ljson-c -lcurl -I/usr/include/upm

RFID-host: RFID-host.cpp
	g++ -g -o RFID-host RFID-host.cpp -lmraa -lupm-grove -lupm-i2clcd -l sqlite3 -I/usr/include/upm

parallaxSerialRFID.o: parallaxSerialRFID.cpp parallaxSerialRFID.h
	g++ -Wall -g -pedantic parallaxSerialRFID.cpp -lmraa -c

member.o: /opt/memberdatabase/member.cpp /opt/memberdatabase/member.h
	g++ -Wall -g -pedantic /opt/memberdatabase/member.cpp -l sqlite3 -c

doorLCD.o: doorLCD.cpp doorLCD.h
	g++ -Wall -g -pedantic doorLCD.cpp -l lupm-i2clcd -lmraa -I/usr/include/upm -c

door.o: door.cpp door.h
	g++ -Wall -g -pedantic door.cpp -lmraa -c

clean:
	rm -f *.o RFID-host doorservice

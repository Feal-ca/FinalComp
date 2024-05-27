all: iochars ioints iochars-v2 copyFile1 copyFileN

iochars: iochars.c
	gcc -o iochars iochars.c

ioints: ioints.c
	gcc -o ioints ioints.c

iochars-v2: iochars-v2.c
	gcc -o iochars-v2 iochars-v2.c

copyFile1: copyFile1.c
	gcc -o copyFile1 copyFile1.c

copyFileN: copyFileN.c
	gcc -o copyFileN copyFileN.c

clean:
	rm ioints iochars iochars-v2 copyFile1 copyFileN

#include <stdio.h>
#include "myChip8.h"
//#include "myChip8.cpp"

chip8 myChip8;

int main(int argc, char **argv)
{
	myChip8.init();
	
	if(argc < 2)
	{
		printf("Usage: myChip8.exe chip8application\n\n");
		return 1;
	}

	// Load game
	if(!myChip8.loadApplication(argv[1]))		
		return 1;
	
	
	while (1)
	{
		myChip8.emulateCycle();
		
		myChip8.debugRender();
		
		
	}		
}

/*void keyboardDown(unsigned char key, int x, int y)
{
	if(key == 27)    // esc
		exit(0);

	if(key == '1')		myChip8.key[0x1] = 1;
	else if(key == '2')	myChip8.key[0x2] = 1;
	else if(key == '3')	myChip8.key[0x3] = 1;
	else if(key == '4')	myChip8.key[0xC] = 1;

	else if(key == 'q')	myChip8.key[0x4] = 1;
	else if(key == 'w')	myChip8.key[0x5] = 1;
	else if(key == 'e')	myChip8.key[0x6] = 1;
	else if(key == 'r')	myChip8.key[0xD] = 1;

	else if(key == 'a')	myChip8.key[0x7] = 1;
	else if(key == 's')	myChip8.key[0x8] = 1;
	else if(key == 'd')	myChip8.key[0x9] = 1;
	else if(key == 'f')	myChip8.key[0xE] = 1;

	else if(key == 'z')	myChip8.key[0xA] = 1;
	else if(key == 'x')	myChip8.key[0x0] = 1;
	else if(key == 'c')	myChip8.key[0xB] = 1;
	else if(key == 'v')	myChip8.key[0xF] = 1;

	//printf("Press key %c\n", key);
}

void keyboardUp(unsigned char key, int x, int y)
{
	if(key == '1')		myChip8.key[0x1] = 0;
	else if(key == '2')	myChip8.key[0x2] = 0;
	else if(key == '3')	myChip8.key[0x3] = 0;
	else if(key == '4')	myChip8.key[0xC] = 0;

	else if(key == 'q')	myChip8.key[0x4] = 0;
	else if(key == 'w')	myChip8.key[0x5] = 0;
	else if(key == 'e')	myChip8.key[0x6] = 0;
	else if(key == 'r')	myChip8.key[0xD] = 0;

	else if(key == 'a')	myChip8.key[0x7] = 0;
	else if(key == 's')	myChip8.key[0x8] = 0;
	else if(key == 'd')	myChip8.key[0x9] = 0;
	else if(key == 'f')	myChip8.key[0xE] = 0;

	else if(key == 'z')	myChip8.key[0xA] = 0;
	else if(key == 'x')	myChip8.key[0x0] = 0;
	else if(key == 'c')	myChip8.key[0xB] = 0;
	else if(key == 'v')	myChip8.key[0xF] = 0;
}*/











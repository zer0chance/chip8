
class chip8
{
public:	
	chip8();
	
	bool drawFlag;
	
	void emulateCycle();
	void debugRender();
	bool loadApplication(const char *filename);
	
	unsigned char gfx[64 * 32];
	unsigned char key[16];
	
	void init();
	
private:
	unsigned short opcode;
	unsigned char memory[4096];
	unsigned char V[16];
	
	unsigned short I;
	unsigned short pc;
	
	unsigned char delay_timer;
	unsigned char sound_timer;	
	
	unsigned short stack[16];
	unsigned short sp;
	
	
};














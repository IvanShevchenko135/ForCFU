#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
///#include <bios.h>

struct REGPACK regs;

unsigned Eraser[17]= {
	0x0FC0, //....******......//
	0x1BE0, //...**.*****.....//
	0x3DF0, //..****.*****....//
	0x7EF8, //.******.*****...//
	0xFF7C, //********.*****..//
	0x7FBE, //.********.*****.//
	0x3FDF, //..********.*****//
	0x1FE1, //...********....*//
	0x0FDE, //....******.****.//
	0x07BC, //.....****.****..//
	0x0378, //......**.****...//
	0x01F0, //.......*****....//
	0x0000, //................//
	0x0000, //................//
	0x0000, //................//
	0x0000, //................//
	0x0004
}; 

unsigned Pencil[17]= {
	0x001C, //...........***..//
	0x003E, //..........*****.//
	0x0073, //.........***..**//
	0x00B3, //........*.**..**//
	0x01BF, //.......**.******//
	0x03DE, //......****.****.//
	0x07E4, //.....******..*..//
	0x0BF8, //....*.*******...//
	0x0BF0, //....*.******....//
	0x1DE0, //...***.****.....//
	0x1E40, //...****..*......//
	0x3F80, //..*******.......//
	0x2E00, //..*.***.........//
	0x5800, //.*.**...........//
	0x6000, //.**.............//
	0x8000, //*...............//
	0x000F
}; 

unsigned Arrow[17]= {
	0x0000, //................//
	0x4000, //.*..............//
	0x3000, //..**............//
	0x3C00, //..****..........//
	0x1F00, //...*****........//
	0x1FC0, //...*******......//
	0x0FF0, //....********....//
	0x0FFC, //....**********..//
	0x07FF, //.....***********//
	0x0780, //.....****.......//
	0x0380, //......***.......//
	0x0380, //......***.......//
	0x0180, //.......**.......//
	0x0180, //.......**.......//
	0x0080, //........*.......//
	0x0080, //........*.......//
	0x0000
};

void loadMouseDsgn(unsigned MouseDsgn[17]) { 
	unsigned NewDsgn[32];
	for (int i = 0; i < 16; i++) {
		NewDsgn[i] = (~MouseDsgn[i]);
		NewDsgn[i + 16]= MouseDsgn[i]; 
	}
	regs.r_bx = (char)(MouseDsgn[16] >> 8);
	regs.r_cx = (char) MouseDsgn[16]; 
	regs.r_es = FP_SEG(&NewDsgn);
	regs.r_dx = FP_OFF(&NewDsgn);
	regs.r_ax = 9; intr(0x33, &regs);
}

int main() {
    regs.r_ax = 0; intr(0x33, &regs);
    if (regs.r_ax == 0) {
		printf("Mouse not found! Press any key to exit...");
		getch();
		return 0;
    }
    printf("Mouse is present and has %d buttons", regs.r_bx);
    getch();
    int gdriver = DETECT;
    int gmode;
    initgraph(&gdriver, &gmode, "C:\\");
    if (graphresult() != grOk) {
		printf("Graphics error. Press any key to exit...");
		getch();
		return 0;
    }
	regs.r_ax = 1; intr(0x33, &regs);
	int mX, mY, mB, dsgnState = -1;
	while (1) {
		if (kbhit()) break;
		regs.r_ax = 3; intr(0x33, &regs);
		mX = regs.r_cx;
		mY = regs.r_dx;
		mB = regs.r_bx;
		gotoxy(1, 1);
		printf("x = %3d y = %3d ", mX, mY);
		if (mB == 0) {
			if (dsgnState != mB) {
				loadMouseDsgn(Arrow);
				dsgnState = mB;
			}
			printf("                              ");
		}
		else if (mB == 1) {
			if (dsgnState != mB) {
				loadMouseDsgn(Pencil);
				dsgnState = mB;
			}
			printf("Left button is pressed.");
			regs.r_ax = 2; intr(0x33, &regs);
			putpixel(mX, mY, WHITE);
			regs.r_ax = 1; intr(0x33, &regs);
		}
		else if (mB == 2) {
			if (dsgnState != mB) {
				loadMouseDsgn(Eraser);
				dsgnState = mB;
			}
			printf("Right button is pressed.");
			for (int i = mX - 2; i < mX + 3; i++) {
				for (int j = mY - 2; j < mY + 3; j++) {
					putpixel(i, j, BLACK);
				}
			}
		}
		else {
			if (dsgnState != mB) {
				loadMouseDsgn(Arrow);
				dsgnState = mB;
			}
			printf("Unknown button condition %d.", mB);
			putpixel(mX, mY, BLACK);
		}
	}
	closegraph();
	return 0;
}
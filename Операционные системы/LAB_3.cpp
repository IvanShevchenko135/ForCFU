#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

struct REGPACK regs;

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
	int mX, mY, mB;
	while (1) {
		if (kbhit()) break;
		regs.r_ax = 3; intr(0x33, &regs);
		mX = regs.r_cx;
		mY = regs.r_dx;
		mB = regs.r_bx;
		gotoxy(1, 1);
		printf("x = %3d y = %3d ", mX, mY);
		if (mB == 0) {
			printf("                              ");
		}
		else if (mB == 1) {
			printf("Left button is pressed.");
			regs.r_ax = 2; intr(0x33, &regs);
			putpixel(mX, mY, WHITE);
			regs.r_ax = 1; intr(0x33, &regs);
		}
		else if (mB == 2) {
			printf("Right button is pressed.");
			for (int i = mX - 2; i < mX + 3; i++) {
				for (int j = mY - 2; j < mY + 3; j++) {
					putpixel(i, j, BLACK);
				}
			}
		}
		else {
			printf("Unknown button condition %d.", mB);
			putpixel(mX, mY, BLACK);
		}
	}
	closegraph();
	return 0;
}
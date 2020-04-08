#include "holberton.h"

void clearScreen()
{
	const char *CLEAR = "\e[1;1H\e[2J";
	write(STDOUT_FILENO, CLEAR, 12);
}

void intro()
{
	clearScreen();
	_puts("                     __________________________________\n"
"                    /                                 /\n"
"\t\t   /  \"Welcome to the Gates of Shell /\n"
"       \t\t  /    Entering may be fatal.\"   /\n"
"                 /_________________________________ /\n"
"\t       *\n"
"            *\n"
"   |\\__/|    x\n"
"    \\*_*/   /\n"
"  ./ \\_/ \\./\n"
"   _/  \\_  _/\\\n"
"^~~~~~~~~~^~^");
	_puts("\n");
//	sleep(1);
}

void load1 ()
{
//	clearScreen();
	intro();
	_puts("\n\nLoading: .");
	sleep(1);
//	clearScreen();
}

void load2()
{
//	clearScreen();
	intro();
	_puts("\n\nLoading: . .");
	sleep(1);
//	clearScreen();
}

void load3()
{
//	clearScreen();
	intro();
	_puts("\n\nLoading: . . .");
	sleep(1);
	_putchar('\n');
//	clearScreen();
}

int main(void)
{
	intro();
	load1();
	load2();
	load3();
	load2();
	load1();
	intro();
	load1();
	load2();
	load3();
	return(0);
}

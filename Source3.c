#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("             _____   ______    ____   _____       ");
	puts("   /|   /|   |    |  |    |    |  /   |           ");
	puts("  / |  / |   |    |  |    |      /    |_____      ");
	puts("    |    |   |    |  |____|     /     |     |     ");
	puts("    |    |   |    |       |     |     |     |     ");
	puts("    |    |   |____|  _____|     |____ |_____|     ");
	return 0;
}
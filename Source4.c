#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void name();

void date();

int main()
{
	name();
	date();
	getchar();
}
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts(" ______________________________________________ ");
	puts("|   Лабораторная №1                            |");
	puts("|   Выполнили: Поскрёбышева С. и Абдуллаева Д. |");
	puts("|______________________________________________|");
}

void date()
{
	setlocale(LC_CTYPE, "RUS");
	puts("             _____   ______    ____   _____       ");
	puts("   /|   /|   |    |  |    |    |  /   |           ");
	puts("  / |  / |   |    |  |    |      /    |_____      ");
	puts("    |    |   |    |  |____|     /     |     |     ");
	puts("    |    |   |    |       |     |     |     |     ");
	puts("    |    |   |____|  _____|     |____ |_____|     ");
}

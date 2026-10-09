#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("   ******************************************** ");
	puts("   *                                          * ");
	puts("   *  Tема: Разработка консольного приложения * "); 
	puts("   * Выплнили Поскрёбышева и Абдуллаева       * ");
	puts("   *                                          * ");
	puts("   ******************************************** ");
	return 0;
}
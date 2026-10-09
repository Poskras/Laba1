#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Привет!");
	getchar();
	return 0;
}
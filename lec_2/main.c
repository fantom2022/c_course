#include "Functions.h"
#include <locale.h>

int main(int argc, char const* argv[]) {

	//Установка русской кодировки
	setlocale(LC_ALL, "Rus");	

	printf("%s %d\n", "999", atoi("999") + 5);


	printf("%d\n", lower('G'));

	//Downcast
	printf("%c\n", (char)lower('G'));

	char digital = '6';
	printf("%d\n", digit(digital));

	printf("%d\n", isdigit(digital));

	getchar();
	return 0;
}
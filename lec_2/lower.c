
/* Преобразование символа к нижнему регистру
Для общего случая tolower из ctype.h */
int lower(int c) {
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
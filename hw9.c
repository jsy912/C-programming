#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void)
{
	char ch[100];
	int len, i;
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);
	len = strlen(ch);
	ch[strlen(ch) - 1] = 0;
	for (i = 0; i < len; i++)
	{
		ch[i] = convCase(ch[i]);
	}
	printf("Output> %s", ch);
	return 0;
}
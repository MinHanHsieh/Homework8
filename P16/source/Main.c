#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("D://110360212_???ɿ?//P16//output.txt", "a");
	printf("?п??J?r??,??ENTER?䵲?????J:\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n?ɮת??[????!!\n");
	system("pause");
	return 0;
}
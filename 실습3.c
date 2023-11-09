#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[30] = "happy c programming";//[]안에 안넣어도 됨
	
	
	printf("문자열 \"%s\"의 길이  : %i\n", src, strlen(src));
	system("PAUSE");
	return 0;
}

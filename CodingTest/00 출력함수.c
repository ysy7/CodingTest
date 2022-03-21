#include <stdio.h>
#include <string.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	// 문자는 띄어쓰기 포함해서 11개
	// 배열의 길이는 11+1(널문자) = 12
	char mjyeol[] = "Hello World";	// 문자갯수 11개

	printf("정수 %d, 문자 %c, 더블 %lf, 플롯 %f\n"
		, jungsu, munja, sosu, sosu1);
	
	//printf("%s\n", mjyeol);
	// mjyeol를 %c로 찍어보자
	// [0]:'H', [1]:'e', [2]:'l', [3]:'l', [4]:'o', [5]:' '
	// [6]:'W', [7]:'o', [8]:'r', [9]:'l', [10]:'d', [11]:'\0'
	for (int i = 0; i < strlen(mjyeol); i++)
	{
		printf("%c", mjyeol[i]);
	}
	
	
}
#include <stdio.h>

int main(void)
{
	int arr[3][4] = {
		{1,2,3,4,}
		{5,6,7,8,}
		{9,10,11,12}
	};
	//sizeof(arr) �迭 arr�� ũ�� : 4 * 12 = 48
	//sizeof(arr[0]) ���� �ϳ��� ũ��:4
	/*for (int i = 0; i < sizeof(arr)/sizeof(int); i++) 
	{
		printf("%d", arr[i]);
	}*/

	printf("%d", arr[0][0]);
	printf("%d", arr[0][1]);
	printf("%d", arr[0][2]);
	printf("%d", arr[0][3]);
	printf("\n");
	printf("%d", arr[1][0]);
	printf("%d", arr[1][1]);
	printf("%d", arr[1][2]);
	printf("%d", arr[1][3]);
	printf("\n");
	printf("%d", arr[2][0]);
	printf("%d", arr[2][1]);
	printf("%d", arr[2][2]);
	printf("%d", arr[2][3]);
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
		
	}
	
}
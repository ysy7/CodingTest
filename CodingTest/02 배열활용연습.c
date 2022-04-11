#include <stdio.h>

int main(void)
{
	//최대값은 14(arr[9])
	int arr[10] = { 8,5,1,6,4,9,10,11,14 };

	int temp = -1;   //비교대상
	int idx = 99;    //인덱스 값

	//배열 요소중 최대값과 그에 해당하는 idx값을 구하시오

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}

	printf("같은 : % D 인덱스 값은 % D \n", temp, idx);
		
	
	
	return 0;
}
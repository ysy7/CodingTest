#include <stdio.h>

void getMax(int* arr, int length) 
{
	int temp = -1;   //�񱳴��
	int idx = 99;    //�ε��� ��

	//�迭 ����� �ִ밪�� �׿� �ش��ϴ� idx���� ���Ͻÿ�

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}

	printf("�ִ밪�� : %d �ε��� ���� %d \n", temp, idx);

}

int main(void)
{
	//�ִ밪�� 14(arr[9])
	int arr1[10] = { 8,5,1,6,4,9,10,11,14 };
	getMax(arr1, 10);

	//�Լ� ���� ���� �ּҰ���  �� idx�� ���غ��� 
	int temp = 999;   //�񱳴��
	int idx = 99;    //�ε��� ��

	//�迭 ����� �ִ밪�� �׿� �ش��ϴ� idx���� ���Ͻÿ�

	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		if (arr1[i] <  temp)
		{
			temp = arr1[i];
			idx = i;
		}
	}
	printf("�ּҰ���:%d �ε��� ����: \n", temp, idx);

	
	
	
	return 0;
}
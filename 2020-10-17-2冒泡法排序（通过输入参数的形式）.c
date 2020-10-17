////冒泡法排序（通过输入参数的形式）
#include<stdio.h>
Bubble_sort(int arr[])//形参数组要写成arr[]的形式
{
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		int j = 0;
		for (j = 0; j < 9 - i; j++)
		{
			//int tem = 0;
			if (arr[j] > arr[j+ 1])
			{
				int tem = arr[j];//这里arr全部用arr[j]的形式
				arr[j] = arr[j+1];
				arr[j+1] = tem;
			}
		}
	}
}
int main()
{
	int arr[] = {0};
	int n = 0;
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//不要把求元素个数放在定义函数里，因为数组传递的是首元素地址
	printf("请输入数组元素的个数n：");
	scanf("%d",&n);
	printf("请输入%d元素：",n);
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
	Bubble_sort(arr);
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
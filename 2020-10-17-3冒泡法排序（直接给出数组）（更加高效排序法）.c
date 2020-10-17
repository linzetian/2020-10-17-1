//冒泡法排序（直接给出数组）（更加高效排序法）
#include<stdio.h>
Bubble_sort(int arr[], int sz)//形参数组要写成arr[]的形式
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设该数组为有序数组
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//int tem = 0;
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];//这里arr全部用arr[j]的形式
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;//假设该数组不全是有序
			}
		}
		if (flag == 1)
		{
			break;//可以提高排序的效率
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//不要把求元素个数放在定义函数里，因为数组传递的是首元素地址
	Bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
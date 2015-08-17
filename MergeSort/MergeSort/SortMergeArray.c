
/* Author Shruty Janakiraman
Program to illustrate the merge sort technique in C
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[5] = { 1, 2, 3, 4, 17 }; //pre defined arrays that are already sorted in ascending order
	int arr1[10] = { 0, 1, 4, 5, 6, 9, 10, 11, 13, 15 };
	int arr2[15] = { 0 };
	int i = 0;
	int j = 0;
	int small = 0;
	int large = 0;
	int w = 0;
	if (arr[4] > arr1[9])
	{
		large = arr[4];

	}
	else
	{
		large = arr1[9];

	}

	while (small <= large)
	{
		small = arr[i];
		if (small > arr1[j])
		{
			small = arr1[j];
			arr2[w] = small;
			j++;
			w++;
		}
		else
		{
			arr2[w] = small;
			i++;
			w++;
		}
	}
	arr2[14] = large;
	for (i = 0; i < 15; i++)
	{
		printf("%d ", arr2[i]);
	}
	_getch();

}

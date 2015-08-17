
/* Author Shruty Janakiraman
Matrix manipulation
This program identifies zeros in a 3x3 matrix and makes the correspoing row and column of the  element zeros*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int arr[3][3] = { 1, 2, 3, 3, 0, 6, 0, 9, 8 };
	// example matrix values
	int flag = 0;
	int pos[9][2];
	for (int l = 0; l < 9; l++)
	{
		pos[l][0] = 0;
		pos[l][1] = 0;
	}
	int i = 0;
	int j = 0;
	int count = 0;
	int x=0;
	int y=0;
	for (i = 0; i < 3; i++)//signifies rows
	{
		for (j = 0; j < 3; j++)//cols
		{
			if (arr[i][j] == 0)
			{
				flag++; //count the number of zeros found
				pos[x][0] = i; //get the position of the zero element
				pos[x][1] = j; //col value
				x++;
			}			
		}
	}

	x = 0; y = 0;

	while (count < flag)
	{
		
		x = pos[count][0];//access the row 
		y = pos[count][1];//access the col
		arr[x][0] = 0; //make the corresponding row and col zero
		arr[x][1] = 0;
		arr[x][2] = 0;
		arr[0][y] = 0;
		arr[1][y] = 0;
		arr[2][y] = 0;
		count++;
	}	

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d \t", arr[i][j]);
		}
		printf("\n ");
	}
	_getch();

}
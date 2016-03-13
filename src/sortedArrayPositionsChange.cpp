/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (len <= 0 || Arr == nullptr)
		return NULL;
	int i, ind1, ind2, temp, flag = -1, j;
	for (i = 0; i<len; i++)
	{
		if ((Arr[i]>Arr[i + 1]))
		{
			ind2 = i;
			flag += 1;
			break;
		}
	}
	for (j = len - 1; j>i; j--)
	{
		if ((Arr[j]<Arr[j - 1]))
		{
			ind1 = j;
			flag += 1;
			break;
		}
	}
	if (flag == 1)
	{
		temp = Arr[ind1];
		Arr[ind1] = Arr[ind2];
		Arr[ind2] = temp;
	}
	return Arr;
}
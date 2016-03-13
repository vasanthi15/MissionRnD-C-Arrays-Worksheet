/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i = 0, chk;
	if (num <0 || len <= 0 || Arr == NULL)
		return NULL;
	chk = (i + len) / 2;
	while ((num<Arr[chk]) && (chk>0))
		chk--;
	while ((num>Arr[chk]) && (chk<len))
		chk++;
	for (i = len; i>chk; i--)
	{
		Arr[i] = Arr[i - 1];
	}
	Arr[i] = num;
	return Arr;
}
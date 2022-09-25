// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<stdio.h> 
#include<stdint.h>
#include <stdlib.h>

uint8_t arr1[] = { 1,3,5,7,9,11 };
uint8_t arr2[] = { 11,33,55,77,99,11,12,13,14 };
uint8_t* arr3;

//void ArrCoppy(uint8_t arr3[], uint8_t arr2[], uint8_t arr1[])
//{
//	for (int i = 0; i < 6; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		arr3[6+i] = arr2[i];
//	}
//}
void soluong(uint8_t arr1[], uint8_t arr2[], uint8_t* arr3)
{
	int a = 0;
	int i = 0, j = 0, s = 0;
	while (arr1[i] != 0)
	{
		i++;
	}
	printf("i=%d\n", i);
	while (arr2[j] != 0)
	{
		j++;
	}
	printf("i=%d\n", j);
	arr3 = (uint8_t*)calloc((s = i + j), sizeof(uint8_t));
	printf("s=%d\n", s);
	for (int i = 0; i < 6; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < 9; i++)
	{
		arr3[6 + i] = arr2[i];
	}
	for (int i = 0; i < s; i++)
	{
		printf("arr3[%d]=%d\n", i, arr3[i]);
	}
	
	for (int i = 0; i < s; i++)
	{
		for (int j = i+1; j < s; j++)
		{
			if (arr3[i] < arr3[j])
			{
				a = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = a;
			}
		}
	}
	printf("mang 3 sau khi sap xep:\n");
	for (int i = 0; i < s; i++)
			{
				printf("arr3[% d] = % d\n", i, arr3[i]);
			}
}
//void sapxep(uint8_t* arr3, int c)
//{
//	int a = 0;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = i + 1; j < c; j++)
//		{
//			if (arr3[i] < arr3[j])
//			{
//				a = arr3[i];
//				arr3[i] = arr3[j];
//				arr3[j] = a;
//			}
//		}
//	}
//	for (int i = 0; i < c; i++)
//	{
//		printf("mang 3 sau khi sap xep:");
//		printf("arr3[% d] = % d\n", i, arr3[i]);
//	}
//}
int main()
{
	 
	soluong(arr1, arr2, arr3);
	//printf("mang 3 sau khi sap xep:");
	//sapxep(arr3, c);
	/*ArrCoppy(arr3, arr2, arr1);
	for (int i = 0; i < ; i++)
	{
		printf("arr[%d]=%d\n", i, arr3[i]);
	}*/
	return 0;
	
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

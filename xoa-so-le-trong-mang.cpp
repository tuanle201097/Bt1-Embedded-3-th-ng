// xoa-so-le-trong-mang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
typedef struct {
    int* ptr;
    int size;
}Array;



void CreateArray(Array* value) {

    srand(time(NULL));
    value->size = 10 + rand() % (30 + 1 - 10);
    int tat;
    printf("Kich thuoc cua array la: %d\n", value->size);

    value->ptr = (int*)malloc(value->size * sizeof(int));

    for (int i = 0; i < value->size; i++) {
        //srand(time(NULL));
        tat = rand() % 50;
        value->ptr[i] = tat;

    }
}

int main()
{
    Array tong;
    int* temp;
    int dem = 0;
    int index = 0;
    CreateArray(&tong);
    for (int i = 0; i < tong.size; i++)
    {
        printf("Arr[%d]= %d\n", i, tong.ptr[i]);
        if ((tong.ptr[i] % 2) == 0)
        {
            //            tong.ptr[i]=tong.ptr[i+1];
            dem++;
        }
    }
    printf("co %d so chan trong mang\n", dem);
    temp = (int*)malloc(dem * sizeof(int));
    for (int i = 0; i < tong.size; i++)
    {
        if ((tong.ptr[i] % 2) == 0)
        {
            for (int j = 0; j < tong.size; j++)
            {
                temp[j] = tong.ptr[i];

            }
            printf("Mang chi co so chan:");
            printf("Arr[%d] = %d\n", i, temp[i]);
        }
    }
    //    printf("Mang so chan : ");
    //    for(int i=0;i<=dem;i++)
    //    {
    //        printf("%d\n",temp[i]);
    //    }
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

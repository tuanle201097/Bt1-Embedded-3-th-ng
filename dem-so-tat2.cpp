#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
 typedef struct{
    int *ptr;
    int size;
}BoxArray;
 typedef struct{
    int tatdo;
    int tatvang;
    int tatxanh;
}mautat;
void CreateArray(BoxArray *value){

    srand(time(NULL));
    value->size = 10 + rand() % (30 +1 - 10);
    int tat;
    printf("Kich thuoc cua array la: %d\n", value->size);

    value->ptr = (int*)malloc(value->size *sizeof(int));

    for(int i = 0; i < value->size; i++){
        //srand(time(NULL));
        tat = rand() % 3;
        value->ptr[i] = tat;

   }
}
void checktat(BoxArray value, mautat *tat)
{
    tat->tatdo=0;
    tat->tatvang=0;
    tat->tatxanh=0;
    for(int i=0;i<value.size;i++)
    {
        if(value.ptr[i]==0)
        {
             tat->tatdo++;
        }
        else if(value.ptr[i]==1)
        {
             tat->tatvang++;
        }
        else{
             tat->tatxanh++;
        }
    }
}

int main()
{
    BoxArray value;
    mautat tat;
    CreateArray(&value);
    checktat(value,&tat);
    for(int i=0;i<value.size;i++)
    {
        printf("Arr[%d] = %d\n",i,value.ptr[i]);
    }
    printf("So doi tat mau do = %d\n",tat.tatdo/2);
    printf("So doi tat mau vang = %d\n",tat.tatvang/2);
    printf("So doi tat mau xanh = %d\n",tat.tatxanh/2);

        return 0;
}

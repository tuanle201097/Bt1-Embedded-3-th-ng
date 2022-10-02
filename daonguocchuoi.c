#include <stdio.h>
char arr[459] = "your payment method will automatically be charged in advance every 4 weeks. You will be charged the introductory rate for the introductory period, and thereafter will be charged the standard rate. All subscriptions renew automatically. You can cancel anytime. Mobile apps are not supported on all devices. These offers are not available for current subscribers. Other restrictions and taxes may apply. Offers and pricing are subject to change without notice.";
void changeArr(char arr1[], char arr2[], int lenght)
{
    for (int i = lenght; i >= 0; i--)
    {
        arr1[i] = arr2[lenght - i - 1];
    }
}
void doivitri(int lenght, char arr2[])
{
    char temp[lenght];
    for (int i = 0; i < lenght; i++)
    {
        temp[i] = arr2[lenght - i-1];
        printf("%c", temp[i]);
    }

}

int main()
{
    char arr2[459];
    changeArr(arr2, arr, 458);
    printf("%s", arr2);
    printf("\n");
    int truoc=0; int sau=0; int dodai=0;
    for(int i=1; i<459;i++)
    {
    if(arr2[i] == 32||arr2[i]==0)
        {
            truoc=sau;
            sau=i;
            dodai=sau-truoc;
         doivitri(dodai, arr2+truoc);
        }
    }
//while (arr2[i] != 32)
//    {
//        i++;
//    }
//        doivitri(i, arr2);
//    while (arr2[i] != 32)
//    {
//        i++;
//    }
//    doivitri(i,arr2+i);

    return 0;
}

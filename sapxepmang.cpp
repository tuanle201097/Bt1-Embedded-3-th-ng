#include <stdio.h>
char arr[459] = "your payment method will automatically be charged in advance every 4 weeks. You will be charged the introductory rate for the introductory period, and thereafter will be charged the standard rate. All subscriptions renew automatically. You can cancel anytime. Mobile apps are not supported on all devices. These offers are not available for current subscribers. Other restrictions and taxes may apply. Offers and pricing are subject to change without notice.";
char arr2[459];
void hienthi(const char arr[], int dodai)
{
    for (int i = 0; i < dodai; i++)
    {
        printf("%c", arr[i]);
    }
}
int main()
{
        printf("%s", arr);
        printf("\n");
    int truoc = 0; int sau = -1; int dodai = 0;
    for (int i = 0; i <= 459; i++)
    {
        if (arr[i] == 32 || arr[i] == 0)
        {
            truoc = sau;
            sau = i;
            dodai = sau - truoc;
            printf("i= %d,dodai = %d\n", i, dodai);
            printf("vi tri cu = %d\n", truoc + 1);
            printf("vi tri moi = %d\n", 459-i);


            for (int j = 0; j < dodai; j++)
            {
         /*       printf("%c", arr[truoc + 1 + j]);*/
                
                arr2[459 - i + j] = arr[truoc + 1 + j];
            }
        }
        
    }
    //printf("%s", arr2);
    //hienthi(arr2, 459);
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

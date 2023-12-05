#include <stdio.h>
#include <stdbool.h>
bool linearSearch(int[],int,int);
int main()
{
        int a[50],len,key;
        printf("enter the range");
        scanf("%d",&len);
        printf("enter the elements of array");
        for(int i=0 ;i<len;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("enter key value");
        scanf("%d",&key);
        bool verify = linearSearch(a,len,key);
        if (verify == 1)
        {
                printf("present");
        }
        else
        {
                printf("missing");
        }
}


bool linearSearch(int a[], int len, int key)
{
        int count = 0;
        for(int i = 0 ; i<len ; i++)
        {
                if(a[i] == key)
                {
                        count++;
                        break;
                }
        }
if (count == 1)
{
        return 1;
}

else
{
        return 0;

}
}

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int N=number,rem;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
    while(number>0)
    {
        rem=number%10;
        if(rem==0)
        c0++;
        if(rem==1)
        c1++;
        if(rem==2)
        c2++;
        if(rem==3)
        c3++;
        if(rem==4)
        c4++;
        if(rem==5)
        c5++;
        if(rem==6)
        c6++;
        if(rem==7)
        c7++;
        if(rem==8)
        c8++;
        if(rem==9)
        c9++;
        number=number/10;
    }
    printf("Frequency of 0 in %d is %d\n",N,c0);
    printf("Frequency of 1 in %d is %d\n",N,c1);
    printf("Frequency of 2 in %d is %d\n",N,c2);
    printf("Frequency of 3 in %d is %d\n",N,c3);
    printf("Frequency of 4 in %d is %d\n",N,c4);
    printf("Frequency of 5 in %d is %d\n",N,c5);
    printf("Frequency of 6 in %d is %d\n",N,c6);
    printf("Frequency of 7 in %d is %d\n",N,c7);
    printf("Frequency of 8 in %d is %d\n",N,c8);
    printf("Frequency of 9 in %d is %d\n",N,c9);
    
    

    return 0;
}



#include <stdio.h>
#include <math.h>

int main()
{
    int num, swap_no;
    int fd, ld, digits;

    
    printf("Enter any number: ");
    scanf("%d", &num);

     
    ld = num % 10; 

    
    digits = (int) log10(num); 


    fd = (int) (num / pow(10, digits));

    swap_no = ld;
    swap_no *= (int) round(pow(10, digits));
    swap_no += num % ((int)round(pow(10, digits)));
    swap_no -= ld;
    swap_no += fd;


    printf("Number after swapping first and last digit: %d", swap_no);

    return 0;
}


	



#include <stdio.h>
void tower_of_hanoi(int n, char source, char destination, char temporary)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", source, destination);
        return;
    }
    tower_of_hanoi(n-1, source, temporary, destination);
    printf("\n Move disk %d from rod %c to rod %c", n, source, destination);
    tower_of_hanoi(n-1, temporary, destination, source);
}

int main()
{
    int n; 
    printf("Enter the number of discks....!!!\n");
    scanf("%d",&n);
    printf("Number of disks are %d.\n",n);
    tower_of_hanoi(n, 'A', 'C', 'B');  
    return 0;
}

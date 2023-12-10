#include <stdio.h>
#include<stdbool.h>
bool is_Prime(int n){
    int count=0;
    int i;
    for(i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    if(count==2) return 1;
    else return 0;
    
}
int linear_search(int a[],int n){
	int i;
    for(i=0;i<n;i++){
        if(is_Prime(a[i])) return i;
        
                 
    }
    return -1;
    
}

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);

}
int result=linear_search(a,n);
        if(result==-1)
               printf("prime not found");
        else printf("prime is found in %d index",result);
    return 0;
}



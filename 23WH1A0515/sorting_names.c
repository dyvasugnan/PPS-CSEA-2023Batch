#include<stdio.h>
#include<string.h>
int main(){
	int n ,m;
	printf("enter the number of name and range for a name");
	scanf("%d%d",&n,&m);
	char names[n][m];
	int i,j;
	printf("enter %d  names: ",n);
	for(i=0;i<n;i++){
		scanf("%s",names[i]);
	}
	char temp[m];
	for(i=0;i<n-i;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(names[j],names[j+1])>0){
				strcpy(temp,names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1],temp);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",names[i]);
	}
	return 0 ;
}


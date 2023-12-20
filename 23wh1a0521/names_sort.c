#include<stdio.h>
#include<string.h>
void sort_names(char[][25],int);
void main(){
	int n,i,j;
	printf("enter the number of names: ");
	scanf("%d",&n);
	char names[n][25];
	for(i=0;i<n;i++){
		printf("enter a name: ");
		scanf("%s",names[i]);
	}
	sort_names(names,n);
	for(j=0;j<n;j++)
		printf("%s\n",names[j]);
}
void sort_names(char names[][25],int l){
	char temp[25];
	for(int j=0;j<l-1;j++){
		for(int i=j;i<l-j-1;i++){
			if((strcmp(names[i],names[i+1]))>0){
				strcpy(temp,names[i]);
				strcpy(names[i],names[i+1]);
				strcpy(names[i+1],temp);
			}
		}
	}

}

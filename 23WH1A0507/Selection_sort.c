
void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
void selectionSort(int a[],int n){
	int i,j;
	int min_index;
	for(i=0;i<n-1;i++){
		min_index = i;
		for(j = i+1;j<n;j++){
			if(a[min_index]>a[j])
			             min_index = j;
			    
		}
		if(min_index!=i) 
		              swap(&a[i],&a[min_index]);
	}
}
void printArray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int a[5]={2,1,9,8,5};
	printArray(a,5);
	selectionSort(a,5);
	printArray(a,5);
}

	


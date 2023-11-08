int main(){
	int n;
	int mat1[n][n],mat2[n][n],mat3[n][n],i,j,k;
	printf("What is the order of the sqaure matrices :");
	scanf("%d",&n);
	printf("Enter %d values for the first matrix: ",n*n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d",&mat1[i][j]);
	}
	printf("The first matrix is \n ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d",mat1[i][j]);
			
		printf("/n");
	}
	printf("Enter %d values for the second matrix: ",n*n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d",&mat2[i][j]);
	}
	printf("The second matrix is \n ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d",mat2[i][j]);
		printf("/n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat3[i][j]=0;
			for(k=0;k<n;k++)
				mat3[i][j]=mat1[i][j]*mat2[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d",mat3[i][j]);
		printf("/n");
	
}
}

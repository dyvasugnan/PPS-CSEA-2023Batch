#include<stdio.h>
#include<string.h>
struct customer{
	int acc_no;
	char name[40];
	int balance;
};
void input(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);
void balance(struct customer[], int, int, int);
int main(){
	struct customer details[10];

	int n,choice,acc_no,amt,index;

	printf("*******BANKING SYSTEM********\n\n");

	printf("Number of customers: ");

	scanf("%d",&n);

	input(details,n);

	do{
		printf("\n*********Banking System Menu**********\n");
        
		printf("Press 1 to display all records.\n");
        
		printf("Press 2 to search a record.\n");
        
		printf("Press 3 to deposit amount.\n");
        
		printf("Press 4 to withdraw amount.\n");
        
		printf("Press 5 to know the account balance.\n");
        
		printf("Press 0 to exit\n");
        
		printf("\nEnter choice(0-4) : ");
        
		scanf("%d", &choice);
	
	switch(choice){

		case 1:
			display(details,n);
			break;

		case 2:
			printf("Enter account number to search : ");
			scanf("%d", &acc_no);
            index = search(details, n, acc_no);
            if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
            else
                {
                    printf("A/c Number: %d\nName: %s\nBalance: %d\n",details[index].acc_no, details[index].name,details[index].balance);
                }
            break;
       
	    case 3:
        		printf("Enter account number : ");
                scanf("%d", &acc_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amt);
                deposit(details, n, acc_no, amt);
                printf("\nDeposit successful!\n\n");
                break;
        
		case 4:
                printf("Enter account number : ");
                scanf("%d", &acc_no);
                printf("Enter amount to withdraw : \n");
                scanf("%d", &amt);
                withdraw(details, n, acc_no, amt);
                printf("\nWithdrawal successful!\n\n");
                break;
        
		case 5:
        	printf("Enter account number:");
        	scanf("%d",&acc_no);
        	balance(details,n,acc_no,amt);
        	break;
        }
    }
    while (choice != 0);
    
    return 0;
    }
    //functions for menu:
	
	void input(struct customer details[80],int s){
    	int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record %d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &details[i].acc_no);
        fflush(stdin);
        printf("Enter name : ");
        gets(details[i].name);
        details[i].balance = 0;
    } 
	}
	
	void display(struct customer details[80],int s){
		int i;
		printf("\n\n A/c No.\tName\tBalance\n");
		for (i = 0; i < s; i++)
    {
        printf("%d\t\t%s\t\t%d\n", details[i].acc_no, details[i].name,
            details[i].balance);
    } 
	}
	int search(struct customer details[80], int s, int number)
	{
    int i;

    for (i = 0; i < s; i++)
    {
        if (details[i].acc_no == number)
        {
            return i;
        } 
    }
    return  - 1;
	}
	void deposit(struct customer details[], int s, int number, int amt)
	{
    int i = search(details, s, number);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        details[i].balance += amt;
    }
}

	void withdraw(struct customer details[], int s, int number, int amt)
	{
    int i = search(details, s, number);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else if (details[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        details[i].balance -= amt;
    }

	}
	void balance(struct customer details[],int s,int number,int amt){
	
	int i;
	i=search(details,s,number);
	
	if(i==-1)
		printf("NOT FOUND");
	
	else {
		printf("Balance:Rs.%d ",details[i].balance);}
	}	


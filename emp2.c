#include<stdio.h>
struct Bank{
int Acc_No;
char Cust_Name[80];
int Bal;
};
void Accept(struct Bank[],int );
void Display(struct Bank[],int );
void Deposit(struct Bank[],int ,int ,int );
void Withdraw(struct Bank[],int ,int ,int );
int Search(struct Bank[],int ,int );

int main()
{
        struct Bank Data[20];
        int n,ch,Acc_No,Amount,i;
        printf("\t\t\tBanking System...\n\n");
        printf("No of Customers: "); scanf("%d",&n);
        Accept(Data,n);
        do{
        printf("\nBanking System menu:\n");
        printf("Press:\n");
        printf("1 to Display all Records.\n");
        printf("2 to Deposit.\n");
        printf("3 to Withdraw.\n");
        printf("0 to Exit.\n");
        printf("Enter Choice:");
        scanf("%d",&ch);
        printf("\n");
        switch(ch){
        case 1:Display(Data,n); break;
        case 2:printf("Enter Account No: "); scanf("%d",&Acc_No);
        printf("Enter Amount to Deposit:"); scanf("%d",&Amount);
        Deposit(Data,n,Acc_No,Amount); break;
        case 3:printf("Enter Account No: "); scanf("%d",&Acc_No);
        printf("Enter Amount to Withdraw: "); scanf("%d",&Amount);
        Withdraw(Data,n,Acc_No,Amount); break;
        }
        }while(ch!=0);
        return 0;
}
void Accept(struct Bank List[80],int s){
        int i;
        for(i=0;i<s;i++){
        printf("\nEnter Data for #%d:",i+1);
        printf("\nEnter Acc_No:"); scanf("%d",&List[i].Acc_No);
        printf("Enter Name: "); scanf("%s",&List[i].Cust_Name);
        List[i].Bal=1000;
        }
}

int Search(struct Bank List[80],int s,int no){
        int i;
        for(i=0;i<s;i++) {
        if(List[i].Acc_No==no);
        return i;
        }
        return -1;
}

void Display(struct Bank List[80],int s){
        int i;
        for(i=0;i<s;i++) {
        printf("\nA/c No: %d",List[i].Acc_No);
        printf("\nName: %s",List[i].Cust_Name);
        printf("\nBalance: %d",List[i].Bal);
        }
}

void Deposit(struct Bank List[],int s,int no,int amt){
        int i; i=Search(List,s,no);
        if(i==-1)
        printf("\nRecord Not Found.");
        else
        List[i].Bal+=amt;
}
void Withdraw(struct Bank List[],int s,int no,int amt){
int i; i=Search(List,s,no);
        if(i==-1)
        printf("\nRecord No Found.");
        else {
        if(List[i].Bal-amt<1000)
        printf("Cannot Withdraw.");
        else
        List[i].Bal-=amt;
        }
}


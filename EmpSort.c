#include<stdio.h>

struct Joining{

 int Day,Month,Year;

};


struct Emp{

 int Emp_ID;
 char Name[80];
 int Salary;
};

void Accept(struct Emp[],int );
void AcceptJ(struct Joining[],int i);
void Display(struct Emp[],int );

//int Search(struct Emp[],int ); 

void main(){

 struct Emp Data[20];struct Joining Dataj[20];
 int n,ch,Emp_ID,Salary,i;
 
 printf("\t\t\tEmployee's Detail...\n\n");
 printf("No of Emp: "); scanf("%d",&n);  
 
 Accept(Data,n);
 
 do{

  printf("\nDetails:\n");
  printf("Press:\n");
  printf("1 to Display all Records.\n");
  printf("2 to Arrange via Date of Joining.\n");
  printf("3 to Arrange via Salary.\n");
  printf("0 to Exit.\n");
  printf("Enter Choice:");
   
  scanf("%d",&ch);
  printf("\n");
  switch(ch){

  case 1:Display(Data,n); break;
 
  case 2:printf("Enter Employee ID: "); scanf("%d",&Emp_ID);
         
         break;

  case 3:printf("Enter Salary: "); scanf("%d",&Salary);

      break;
}
}while(ch!=0);
}


void Accept(struct Emp List[80],int s){

int i;
 for(i=0;i<s;i++){
    printf("\nEnter Data for #%d:",i+1);
    printf("\nEnter Emp_ID :"); scanf("%d",&List[i].Emp_ID);
    
    printf("Enter Name: "); scanf("%s",&List[i].Name);
    printf("Enter Date of Joining: "); AcceptJ(ListJ,i);
    printf("Enter Salary: "); scanf("%d",&List[i].Salary);
  }
}

void Display(struct Emp List[80],int s){

int i;
  for(i=0;i<s;i++) {
     printf("\n ID: %d",List[i].Emp_ID);
     printf("\nName: %s",List[i].Name);
     printf("\nSalary: %d",List[i].Salary);
 }
}

void AcceptJ(struct Joining ListJ[80],int i){

  printf("\n\tDay:"); scanf("%d",&List[i].Date);
  printf("\n\tMonth:"); scanf("%d",&List[i].Month);
  printf("\n\tYear:"); scanf("%d",&List[i].Year);
}






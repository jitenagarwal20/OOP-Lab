#include<stdio.h>
struct employee{
	int emp_id;
	int age;
	int basic_salary;
	char name[50];
	int gross_sal;
};
int gross_salary(int x){
	int DA,HRA,Gross;
	DA=(1.0*x)*0.8;
	HRA=(1.0*x)*0.1;
	Gross=x+DA+HRA;
	return Gross;
}
void create(struct employee *table,int n){
	int i;
	for(i=0;i<n;i++){
		printf("enter employee id:");
		scanf("%d",&table[i].emp_id);
		printf("enter employee name:");
		fflush(stdin);
		scanf("%[^\n]s",&table[i].name);
		printf("enter the age of the employee:");
		scanf("%d",&table[i].age);
		printf("enter basic salary of the employee:");
		scanf("%d",&table[i].basic_salary);
		table[i].gross_sal=gross_salary(table[i].basic_salary);
	}
}
void display(struct employee *table,int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nemployee id is %d",table[i].emp_id);
		printf(" employee name is %s",table[i].name);
		printf(" and age of the employee is %d",table[i].age);
		printf("\nbasic salary of the above mentioned employee is %d",table[i].basic_salary);
		printf(" and the gross salary is %d",table[i].gross_sal);
	}
}
int main(){
	int n;
	printf("enter no. of employees whose information you want to gather:");
	scanf("%d",&n);
	struct employee office[n];
	create(office,n);
	display(office,n);
	return 0;
}

#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int marks;
};
void create(struct student *a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("enter the name of the student:");
		fflush(stdin);
		scanf("%[^\n]s",&a[i].name);
		printf("enter the roll no. of the student:");
		scanf("%d",&a[i].roll_no);
		printf("enter marks scored by the student:");
		scanf("%d",&a[i].marks);
	}
}
void display(struct student *a,int size){
	int i=0;
	for(i=0;i<size;i++){
		printf("\nname of the student is %s",a[i].name);
		printf(",the roll no. of the student is %d",a[i].roll_no);
		printf(" and marks scored by the student is %d",a[i].marks);
	}
}
int main(){
	int n;
	printf("number of inputs you want:");
	scanf("%d",&n);
	struct student school[n];
	create(school,n);
	display(school,n);
	return 0;
}

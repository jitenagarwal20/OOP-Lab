#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[20];
	int marks;
	int roll_no;
};
void display(struct student *a){
	printf("name of the student is %s",a->name);
	printf(",roll no. of the student is %d and marks scored by the student is %d",a->roll_no,a->marks);
}
int main(){
	struct student *details=(struct student *)malloc(sizeof(struct student));
	printf("enter the name of the student:");
	scanf("%[^\n]s",&details->name);
	printf("enter the roll no. of the student:");
	scanf("%d",&details->roll_no);
	printf("enter the marks scored by the student:");
	scanf("%d",&details->marks);
	display(details);
	return 0;
}

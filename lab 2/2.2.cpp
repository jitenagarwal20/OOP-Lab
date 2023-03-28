#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int marks;
};
void create(struct student *a){
	int i;
	for(i=0;i<2;i++){
		printf("enter the name of the student:");
		fflush(stdin);
		scanf("%[^\n]s",&a[i].name);
		printf("enter the roll no. of the student:");
		scanf("%d",&a[i].roll_no);
		printf("enter marks scored by the student:");
		scanf("%d",&a[i].marks);
	}
}
void compare(struct student *a){
	int i=0;
	if(a[i].marks>a[i+1].marks){
		printf("\nname of the student is %s",a[i].name);
		printf(" roll no. of the student is %d",a[i].roll_no);
	}
	else{
		printf("\nname of the student is %s",a[i+1].name);
		printf(" roll no. of the student is %d",a[i+1].roll_no);
	}
}
int main(){
	struct student com[2];
	create(com);
	compare(com);
	return 0;
}

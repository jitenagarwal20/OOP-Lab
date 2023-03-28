#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int marks[5];
	int total_marks;
	float percentage;
};
void create(struct student *a,int size){
	int i;
	for(i=0;i<size;i++){
		int j;
		printf("enter the name of the student:");
		fflush(stdin);
		scanf("%[^\n]s",&a[i].name);
		printf("enter the roll no. of the student:");
		scanf("%d",&a[i].roll_no);
		a[i].total_marks=0;
		for(j=0;j<5;j++){
			printf("enter marks of the student in subject %d:",j+1);
			scanf("%d",&a[i].marks[j]);
			a[i].total_marks+=a[i].marks[j];
		}
		float c=1.0*a[i].total_marks;
		a[i].percentage=c/5;
	}
}
void display(struct student *a,int size){
	int i;
	for(i=0;i<size;i++){
		int j;
		printf("\nname of the student is %s",a[i].name);
		printf(" roll no. of the student is %d",a[i].roll_no);
		printf(" total marks scored by the student is %d",a[i].total_marks);
		printf(" and percentage obtained by the student is %.2f",a[i].percentage);
	}
}
void range(struct student *a,int size){
	int i;
	float lw,hg;
	printf("\nenter the range for the percentage:");
	scanf("%f %f",&lw,&hg);
	for(i=0;i<size;i++){
		if(a[i].percentage>=lw && a[i].percentage<=hg){
			printf("\nname of the student is %s",a[i].name);
			printf("\nroll no. of the student is %d",a[i].roll_no);
		}
	}
}
void sort(struct student *a,int size){
	int i;
	for(i=0;i<size;i++){
		int j;
		for(j=i;j<size;j++){
			if(a[i].total_marks>a[j].total_marks){
				struct student temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int i,n;
	printf("enter no. of inputs:");
	scanf("%d",&n);
	struct student arr[n];
	create(arr,n);
	range(arr,n);
	printf("\n\nbefore sorting the list:");
	display(arr,n);
	sort(arr,n);
	printf("\n\nafter sorting the list:");
	display(arr,n);
	return 0;
}

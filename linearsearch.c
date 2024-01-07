#include<stdio.h>
int linear(int arr[],int a,int r);
void main()
{
    int a;
    printf("Enter number of students attended:");
    scanf("%d",&a);
    int arr[a];
    printf("ENTER STUDENT ROLL NUMBERS:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("THE STUDENTS PRESENTS ARE:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
    int r;
    printf("STUDENT ROLL NUMBER TO CHECK:");
    scanf("%d",&r);
    if(linear(arr,a,r))
    {
        printf("STUDENT ATTENDED..");
    }
    else
    {
        printf("STUDENT NOT ATTENDED..");
    }
}
int linear(int arr[],int a,int r)
{
    for(int i=0;i<a;i++)
    {
        if(arr[i]==r)
        {
        return 1;
        }
    
    }
    return 0;
}
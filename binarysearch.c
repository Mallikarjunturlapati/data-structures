#include<stdio.h>
int binary(int arr[],int a,int r);
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
    if(binary(arr,a,r))
    {
        printf("STUDENT CLEARED..");
    }
    else
    {
        printf("STUDENT NOT CLEARED..");
    }
}
int binary(int arr[],int a,int r)
{
    int low=0;
    int high=a-1;
    while(low<=high)
    {   
        int mid=(low+high)/2;
        if(arr[mid]==r)
        {
            return 1;
        }
        else if(arr[mid]<r)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;

        }
       
    }
    return 0;
} 
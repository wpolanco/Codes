
#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[5],f=-1,r=-1,v;
int insert(int v,int arr[5]);
int delete(int arr[max]);
 int main()
 {
     int option;
     while(1)
    {
        printf("insert=1\n");
        printf("delete=2\n");
        printf("exit=3\n");
        printf("enter option\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("insert operation\n");
            printf("enter the value want to insert\n");
            scanf("%d",&v);
            insert(v,arr);
            break;
        case 2:
            printf("delete operation\n");
            delete_q(arr);
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
 }
 int insert(int v,int arr[5])

 {
     if((f==0&&r==max-1)||(f==r+1))
     {
        printf("queue is full");
     }
     else if(f==-1&&r==-1)
     {
        f=0;
        r=0;
        arr[r]=v;
     }
     else if(r==max-1&&f!=0)
     {
         r=0;
         arr[r]=v;

     }
     else
     {
         r++;
         arr[r]=v;
     }
     printf("the queue is \n");
     int i;
     if(r>=f)
     {
         for(i=f;i<=r;i++)
            printf("%d",arr[i]);
     }
     else
        {
            for(i=f;i<=max-1;i++)
            printf("%d",arr[i]);
        for(i=0;i<=r;i++)
        printf("%d",arr[i]);

        }
        return 0;
 }
int delete_queue(int arr[max])
{
    int i;
    int temp;

    if(f==-1 && r==-1 )
     printf("queue is empty\n");
    else if(f==r)
    {
         temp=arr[f];
        f=r=-1;
    }
    else if(f==max-1)
    {
        temp=arr[f];
        front=0;
    }
    else
    {
         temp=arr[f];
     f++;
    }
    int i;
     if(r>=f)
     {
         for(i=f;i<=r;i++)
            printf("%d",arr[i]);
     }
     else
        {
            for(i=f;i<=max-1;i++)
            printf("%d",arr[i]);
        for(i=0;i<=r;i++)
        printf("%d",arr[i]);

        }
        return 0;
 }


//Name- Indranil Naskar,Roll no-108,Sec-B,University Roll-10900220109
//Row major addressing & Column major addressing
#include<stdio.h>
#include<conio.h>
//function
  void rowmajor(int p1,int q1,int x1,int y1,int arr1)
    {
    int i,j;
    for(i=0;i<x1;i++)
    {
      for(j=0;j<y1;j++)
        {
        	if(i==p1 && j==q1)
            printf("Address of arr[%d][%d] is %d",p1,q1,arr1);
            
		    arr1=arr1+4;	
		}
	}
	}
 //column major
   void colmajor(int p1,int q1,int x1,int y1,int arr1)
    {
    int i,j;
    for(j=0;j<y1;j++)
    {
      for(i=0;i<x1;i++)
        {
        	if(i==p1 && j==q1)
            printf("Address of arr[%d][%d] is %d",p1,q1,arr1);
            
		    arr1=arr1+4;	
		}
	}
	}
  
//nain function

int main()
 {
  int rowmajor(int p1,int q1,int x1,int y1,int arr1);
  int colmajor(int p1,int q1,int x1,int y1,int arr1);
  int arr;
  int x,y,i,j,p,q,choice;
  printf("ROW MAJOR ADDRESSING & COLUMN MAJOR ADDRESSING\n");
  printf("Enter the BASE ADDRESS  of the array \n");
  scanf("%d",&arr);
  printf("The Array is arr[X][Y] \n");
  printf("Enter the value of X \n");
  scanf("%d",&x);
  printf("Enter the value of Y \n");
  scanf("%d",&y);
  
  while(1)
    {
    	printf("\n ******************** \n");
    	printf("1.Row Major Addressing \n");
    	printf("2.Column Major Addressing \n");
    	printf("3.Exit \n");
    	printf("Enter your choice \n");
    	scanf("%d",&choice);
       	switch(choice)
    	  {
    	  	case 1:
    	  		  printf("Enter the position want to find the address \n");
                  printf("Enter ROW value \n");
                  scanf("%d",&p);
                  printf("Enter COLUMN value \n");
                  scanf("%d",&q);
                  rowmajor(p,q,x,y,arr);
    	  		break;
    	  		
    	  	case 2:
    	  		  printf("Enter the position want to find the address \n");
                  printf("Enter ROW value \n");
                  scanf("%d",&p);
                  printf("Enter COLUMN value \n");
                  scanf("%d",&q);
			      colmajor(p,q,x,y,arr);
			    break;
			    
			case 3:
			    return 0;
			    
			default:
			    printf("Wrong option choosed \n");
		  }
	}
}



// reverse array using recursion
#include<stdio.h>
void ReverseArray(int *arr, int i, int j){
    int temp;
    if(i>=j)
        return;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    ReverseArray(arr, i+1, j-1);
}
int main()
{
    int arr[100];
    int n,i;
    printf("\nEnter Size of Array ");
    scanf("%d",&n);

    printf("\nEnter Array Elements ");
    for(i = 0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    ReverseArray(arr, 0, n-1);
    printf("\nArray After Reverse ");
    for(i = 0;i<n;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

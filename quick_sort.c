#include<stdio.h>
void swap(int *x ,int*y){
int temp=*x;
*x=*y;
*y=temp;
};
void quicksort(arr[],length){
quicksort_recursion(arr,0,a-1);
}
void quicksort_recursion( arr[],int low,int high){
      if(low<high)
      {
          int pivot_index=partision(arr,low,high);
          quicksort_recursion(arr,low,pivot_index-1);
          quicksort_recursion(arr,pivot_index+1,high);
      };

}
int partision(int arr[],int low,int high){
  int pivot_value=arr[high];
  int i=low;
  for(int j=0;j<high,j++)
  {
      if(arr[j]<=pivot_value)
      {
            swap(&arr[i],&arr{j});
      }
  }
  swap(&arr[i],&arr[high]);
  i++;
}
int main()
{
      int arr[]={2,1,4,3,6,5,8,7,10,9};
      int a=10;
quicksor(arr,a);
for(int i=0;i<a;i++)
{
printf("%d",arr[i]);
}
}
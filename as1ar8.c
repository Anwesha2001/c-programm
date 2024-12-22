#include<stdio.h>
int main(){
   int n;
   printf("Enter size of array");
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++){
        printf("Enter array values %d:", i+1);
        scanf("%d",&arr[i]);
}
int temp=0;
for(int i=0;i<n;i++){
    temp+=arr[i];
}
        printf("total sum of array values is %d",temp);

return 0;
}
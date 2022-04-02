#include<stdio.h>
int main() {
  int a[10],i,j,temp,n;
  printf("enter number of array:");
  scanf("%d",&n);

  printf("enter %d elements to be sorted:",n);
  for(i=0;i<n;i++){
 scanf("%d", &a[i]);
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
printf("sorted array is \n");
for(i=0;i<n;i++){
  printf("%d\t\n",a[i]);
}
return(0);

}
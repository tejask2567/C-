#include<stdio.h>

int main() {
  int a[10],i,j,temp,n;
  int key,last,first,mid;
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

printf("enter the key:");
scanf("%d",&key);
 first=0;
last=n-1;
while(first<=last)
{
   mid=(first+last)/2;
   if(key==a[mid])
   {
    printf("key is found in the location %d\n",mid+1);
     return 0;
   }
    
    else if (key>a[mid])
   {
      first=mid+1;
   } 
    else
    {
    last=mid-1;
    }
 }
 printf("key is not found in array\n");
return(0);
}

#include <stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int i,key,found=0;
    printf("enter elements to search:");
    scanf("%d",&key);{
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if(found)
      printf("element %d found at position %d\n",key,i+1);
    else
      printf("element %d not found\n",key);
    return 0;
}
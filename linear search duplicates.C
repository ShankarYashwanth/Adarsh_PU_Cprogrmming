linear search duplicates


#include <stdio.h>


void linearsearchduplicates(int arr[],int size,int target)
{
    int found=0;
    printf("searching for %d in the array...\n",target);
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            printf("Element %d  found in the array index %d\n",target,i);
            found=1;
        }
    }
    if(!found){
        printf("element %d not found in the array\n,target");
    }
}
int main(){
    int arr[]={10,20,30,20,40,10,50,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target_element;
    printf("enter the element to search:");
    scanf("%d",&target_element);
    linearsearchduplicates(arr,size,target_element);
    return 0;
}
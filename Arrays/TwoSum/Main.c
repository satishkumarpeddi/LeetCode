#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10000
int hash[TABLE_SIZE];
int hashFunction(int key){
    if(key<0) key=-key;
    return key%TABLE_SIZE;
}
int* twoSumMethod(int *arr,int target,int *returnSize,int numSize){
    for(int i=0;i<TABLE_SIZE;i++){
        hash[i] = -1;
    }
    for(int i=0;i<numSize;i++){
        int diff = target-arr[i];
        int hashIndex = hashFunction(diff);
        if(hash[hashIndex]!=-1&&arr[hash[hashIndex]]==diff){
            int* result = (int*)malloc(2*sizeof(int));
            result[0]=hash[hashIndex];
            result[1]=i;
            *returnSize = 2;
            return result;
        }
        hash[hashFunction(arr[i])] = i;
    }
    *returnSize = 0;
    return NULL;
}
void main(){
    int arr[] = {2,7,5,3};
    int target = 9;
    int numSize = 4;
    int returnSize;
    int* result = twoSumMethod(arr,target,&returnSize,numSize);
    printf("The Result Index Array: ");
    for(int i=0;i<returnSize;i++){
        printf("%d ",result[i]);
    }
    printf("\n");
}
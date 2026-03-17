#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int cmp(const void *a,const void *b){
    return strcmp(*(char**)a,*(char**)b);
} 
char* longestCommonPrefix(char**strs,int strsLen){
    if(strsLen==0) return "";
    qsort(strs,strsLen,sizeof(char*),cmp);
    char* first = strs[0];
    char* last = strs[strsLen-1];
    int i=0;
    while(first[i]&&first[i]==last[i]){
        i++;
    }
    char * result = (char*)malloc((i+1)*sizeof(char));
    strncpy(result,first,i);
    result[i]='\0';
    return result;
}
void main(){
    char *strs[] = {"flower","flow","flight"};
    int strsLen=3;
    char* result = longestCommonPrefix(strs,strsLen);
    printf("%s",result);
}
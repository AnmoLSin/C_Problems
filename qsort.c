#include<stdlib.h>
int comp(const void *a,const void *b)
{
return *((int*)a)-*((int*)b);
}
int main()
{
    int arr[5]={1,2,3,4,5},i;
    qsort(arr,5,sizeof(int),comp);
    for(i=0;i<5;i++)
    printf("%d",arr[i]);
}

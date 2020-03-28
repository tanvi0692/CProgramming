#include<stdio.h>
#include<stdlib.h>
int *merge(int *array1, int *array2, int n , int m){
int count=0,i=0,j=0,k=0;
int *result = (int *)malloc((m+n)*sizeof(int));
while( count<(m+n)){
if(array1[i]<array2[j]){
result[count]=array1[i];
i++;
}
else{
result[count]=array2[j];
j++;
}
count++;
}
for(k=0;k<(m+n);k++){
printf("%d ",result[k]);
}
return(result);
}

int main(){
int k=0;
int array1[]={1,3,5,7};
int array2[]={4,6,9};
int len1= sizeof(array1)/sizeof(array1[0]);
int len2=sizeof(array2)/sizeof(array2[0]);
printf("%d:%d\n",len1, len2);
int *result = merge(&array1[0],&array2[0], len1, len2);
for(k=0;k<(len1+len2);k++){
printf("\n%d ",result[k]);
}
return 0;
}

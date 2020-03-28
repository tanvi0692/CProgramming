#include<stdio.h>

char countuniq(char *string){
char *temp;
char *start=&string[0];
temp=string;
while(*string!='\0'){
int count =0;
while(*temp!='\0'){
if(*temp==*string){count++;}
printf("%c:%d\n",*temp,count);
temp++;
}
if(count<=1){return(*string);}
string++;
temp=start;
printf("%c:%c\n",*temp, *string);
}
return("n");
}

int main(){
char *s="assdarfyfh";
char r=countuniq(s);
printf("%c ", r);
return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char *word, int len){
int index=0;
char *end = word;
end=end+len-1;
char temp;
while(end>word)
{
printf("%c:%c\n",*word,*end);
temp=*end;
*end=*word;
*word=temp;
word++;
end--;
}
printf("%s ",word);
printf("%s ",end);
}



void main()
{
char h[]="hello Tanvi Sharma";
char *ptr = &h[0];
int len = strlen(h);
printf("word: %s\n",h);
reverse(&h[0],len);
printf("reverse: %s\n",h);
}

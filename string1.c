#include<stdio.h>
#include<string.h>
int main()
{
char string1[200],string2[100];
int i;
printf("Enter two words that are to be compared\n");
gets(string1);
gets(string2);
i=strcmp(string1,string2);
if (i==0)
printf("They are equal \n");
else
printf("They are not equal \n");
return 0;
}
//

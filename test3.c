#include <stdio.h>
int main()
{
char a;
scanf("%c",&a);
if((a>=65 && a<=91)|| (a>=97 && a<=122))
{
if(a=='a'|| a=='e' ||a=='i'|| a=='o' ||a=='u' ||a=='A' ||a=='E' ||a=='I'|| a=='O'|| a=='U')
printf("Vowel");
else
priintf("Consonant");
}
printf("Neither vowel nor consonant");
}

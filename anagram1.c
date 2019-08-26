#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int length(char s[]);
void main()
{
   char s1[50],s2[50];
   int l1,l2,i,j,k,count=0;
   clrscr();
   printf("Enter first string:");
   gets(s1);
   printf("Enter second string:");
   gets(s2);
   l1=length(s1);
   l2=length(s2);
   if(l1==l2)
   {
      for(i=0;s1[i]!='\0';i++)
      {
	 for(j=0;s2[j]!='\0';j++)
	 {
	    if(s1[i]==s2[j])
	    {
	       count++;
	       for(k=j;k<l2-1;k++)
		  s2[k]=s2[k+1];
	       s2[k]='\0';
	       l2--;
	    }
	 }
      }
   }
   if(l1==count)
      printf("They are anagram");
   else
      printf("They are not anagram");
   getch();
}
int length(char s[])
{
   int i,l=0,j;
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]==' ')
       {
	  for(j=i;s[j]!='\0';j++)
	     s[j]=s[j+1];
	  s[j]='\0';
	  l++;
       }
       else
	  l++;
   }
   return(l);
}
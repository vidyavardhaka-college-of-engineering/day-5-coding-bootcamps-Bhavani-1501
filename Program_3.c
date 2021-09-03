//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
  int i,len,flag=0;
  printf("Enter the String\n");
	scanf("%s", str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    if(str[i]!=str[len-i-1])
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    printf("%s is a Palindrome String",str);
  }
  else
  {
    printf("%s is not a Palindrome String",str);
  }

	//Write your code here
	
	return 0;
}

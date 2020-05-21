#include <stdio.h>
int count_word(char *str);
void main(int argc,char* argv[])
{
	char str1[180];
	int sum=0;
	puts("\n please enter a string");
	gets(str1);
	sum=count_word(str1);
	printf("there are %d words in this sentence",sum);
}
int count_word(char *str)
{
	int count,flag;
	char *p;
	count=0;
	flag=0;
	p=str;
	while(*p!='\0')
	{
		if(*p==' ')
			flag=0;
		else if(flag==0)
		{
			flag=1;
			count++;
		}
		p++;
	}
	return count;
}
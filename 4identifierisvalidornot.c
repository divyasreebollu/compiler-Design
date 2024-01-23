#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[10];
	int flag, i=1;
	printf("Enter an identifier:");
	scanf("%s",a);
	if(isalpha(a[0]))
		flag=1;
	else
		flag=0;
	while(a[i]!='\0')
	{
		if(!isdigit(a[i])&&!isalpha(a[i]))
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1)
		printf("It is a valid identifier.\n");
	else
		printf("It is not a valid identifier.\n");
}


cse3@csesrit-HP-Pro-3090-MT:~$ cd sree
cse3@csesrit-HP-Pro-3090-MT:~/sree$ cd 522
cse3@csesrit-HP-Pro-3090-MT:~/sree/522$ gcc 4identifier.c
cse3@csesrit-HP-Pro-3090-MT:~/sree/522$ ./a.out
Enter an identifier:myvar
It is a valid identifier.
cse3@csesrit-HP-Pro-3090-MT:~/sree/522$ ./a.out
Enter an identifier:_myname
It is not a valid identifier.


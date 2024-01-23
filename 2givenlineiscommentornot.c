#include <stdio.h>
#define MAX_SIZE 20
void main()
{
   char com[MAX_SIZE];
   int a=0,i=2;
   printf("\n Enter a comment: ");
   fgets(com,MAX_SIZE,stdin);
   if(com[0]=='/')
   {
	if(com[1]=='/')
	{
		printf("\n It is a comment");
	}
	else if(com[1]=='*')
	{
		for(i=2;i<=30;i++)
		{
			if(com[i]=='*' && com[i+1]=='/')
			{
				printf("\n It is a comment");
				a=1;
				break;
			}
			else
				continue;
		}
		if(a==0)
		{
			printf("\n It is not a comment");
		}
	}
	else
	{
		printf("\n It is not a comment");
	}
   }
else
	printf("\n It is not a comment");
}


cse3@csesrit-HP-Pro-3090-MT:~$ cd Desktop
cse3@csesrit-HP-Pro-3090-MT:~/Desktop$ cd 522
cse3@csesrit-HP-Pro-3090-MT:~/Desktop/522$ gcc 2comment.c
cse3@csesrit-HP-Pro-3090-MT:~/Desktop/522$ ./a.out

 Enter a comment: //com

 It is a commentcse3@csesrit-HP-Pro-3090-MT:~/Desktop/522$ ./a.out

 Enter a comment: /*com*/

 It is a commentcse3@csesrit-HP-Pro-3090-MT:~/Desktop/522$ ./a.out

 Enter a comment: com

 It is not a comment

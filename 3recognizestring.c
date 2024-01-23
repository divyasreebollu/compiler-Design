#include<stdio.h>
#define MAX 200
int main()
{
	char s[MAX],c,ca=0;
	int state=0,i=0;
	printf("\n Enter a string:");
	scanf("%s",s);
	while(s[i]!='\0')
	{
		switch(state)
		{
			case 0:
				c=s[i++];
				if(c=='a')
				{
					state=0;
					ca++;
				}
				else if(c=='b')
					state=1;
				else
					state=4;
				break;
			case 1:
				c=s[i++];
				if(c=='b')
					state=2;
				else
					state=4;
				break;
			case 2:
				c=s[i++];
				if(c=='b')
					state=3;
				else
					state=4;
				break;
			case 3:
				c=s[i++];
				if(c=='b')
					state=3;
				else
					state=4;
				break;
			case 4:
				printf("%s is not a recognised string.\n",s);
				return 0;
		}
	}
	if(state==0)
		printf("%s is accepted under rule 'a*'.\n",s);
	else if(state==1||state==3||(state==2&&(ca>1||ca==0)))
		printf("%s is accepted under rule'a*b+'.\n",s);
	else if(state==2)
		printf("%s is accepted under rule'abb'.\n",s);
	else if(state==4)
		printf("%s is not a recognised string.\n",s);
}	

cse3@csesrit-HP-Pro-3090-MT:~$ cd sree
cse3@csesrit-HP-Pro-3090-MT:~/sree$ ls
522  a.out  recstr.c
cse3@csesrit-HP-Pro-3090-MT:~/sree$ gcc recstr.c
cse3@csesrit-HP-Pro-3090-MT:~/sree$ ./a.out

 Enter a string:aa
aa is accepted under rule 'a*'.
cse3@csesrit-HP-Pro-3090-MT:~/sree$ ./a.out

 Enter a string:aabba
aabba is not a recognised string.
cse3@csesrit-HP-Pro-3090-MT:~/sree$ ./a.out

 Enter a string:aabb
aabb is accepted under rule'a*b+'.
cse3@csesrit-HP-Pro-3090-MT:~/sree$ ./a.out

 Enter a string:abb
abb is accepted under rule'abb'.
cse3@csesrit-HP-Pro-3090-MT:~/sree$ ./a.out

 Enter a string:abbb
abbb is accepted under rule'a*b+'.
cse3@csesrit-HP-Pro-3090-MT:~/sree$ 


												

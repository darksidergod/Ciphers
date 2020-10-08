
#include <stdio.h>
#include <string.h>

int main(void)
{
	char pt[100];
	char ct[100];
	int ptr=0;
	int i=0, j=0, k=0;

	printf("Enter plaintext. \n");
	scanf("%s", &pt[0]);
	printf("Encypting..........\n");
	int len=strlen(pt);
	while(i<len)
	{
		if(ptr%2==0)
			{
				ct[ptr]=pt[j];
				j++;	
			}

		else
		{
			ct[ptr]=pt[len-k-1];
			k++;
		}
		i++;
		ptr++;
	}
	ct[ptr]='\0';
	printf("%s \n", &ct[0]);


		
}	 	

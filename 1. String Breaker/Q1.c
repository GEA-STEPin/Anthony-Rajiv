#include<stdio.h>
#include<stdlib.h>

char * stringBreaker(char * str)
{
	int len = strlen(str);
	char *temp = (char *)malloc(sizeof(char) * (len + 1));
	int flag = 0;
	int i = 0,j = 0;
	for (i = 0; i < len; i++)
	{
		if (!flag && str[i] == '$')
		{
			flag = 1;
			temp[j++] = str[i];
			continue;
		}
		if (flag && str[i] == '$')
		{
			flag = 0;
			j = 0;
			continue;
		}
		if (flag)
		{
			temp[j++] = str[i];
			if (str[i] == ';')
			{
				temp[j++] = '\0';
				break;
			}
		}
	}
	return temp;
}

int main() {
    char c[100];
    char * ptr;
    FILE *fptr;
    if ((fptr = fopen("text.txt", "r")) == NULL) {
        printf("Error! File cannot be opened.");
        exit(1);
    }
	fscanf(fptr, "%[^\n]", c);
	printf("Line : %s\n", c);
    ptr = c;
    char * ans = stringBreaker(ptr);
    printf("Answer :\n%s\n", ans);
    fclose(fptr);

    return 0;
}

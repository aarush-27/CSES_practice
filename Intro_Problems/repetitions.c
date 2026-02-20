#include <stdio.h>
int main()
{
	char buf[1<<20];
	size_t n = fread(buf,1,sizeof(buf),stdin);
	int max = 0,count = 0;
	char prev = 0;
	for (size_t i = 0;i<n;i++)
	{
		if (buf[i] == '\n') break;
		if (buf[i] == prev)
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if (count > max)
		{
			max = count;
		}
		prev = buf[i];
	}
	printf("%i",max);
}

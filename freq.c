#include <stdio.h>

int main()
{
	char c[100];
	int a = 0, e = 0, iv = 0, o = 0, u = 0, consonants = 0, space = 0;
	printf("Enter a sentence : \n");
	scanf("%[^\n]s", &c);
	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			a++;
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			e++;
		}
		else if (c[i] == 'i' || c[i] == 'I')
		{
			iv++;
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			o++;
		}
		else if (c[i] == 'u' || c[i] == 'U')
		{
			u++;
		}
		else if (c[i] == ' ')
		{
			space++;
		}
		else
		{
			consonants++;
		}
	}
	printf("occurance of a = %d\noccurance of e = %d\noccurance of i = %d\noccurance of o = %d\noccurance of u = %d\noccurance of consonants = %d", a,e,iv,o,u, consonants - space);

	return 0;
}
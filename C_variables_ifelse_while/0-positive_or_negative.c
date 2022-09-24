int _strlen(char *s)
{
	int i, j;

	for (i = 0, j = 0; 1; i++)
	{
		if (s[i])
		{
			j++;
			continue;
		}
		
		break;
	}

	return (j);
}


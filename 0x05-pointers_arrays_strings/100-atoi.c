/**
 * _atoi - function that convert string to integers.
 * @s: pointer char type
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int negative = 1, j = 0;
	unsigned int number = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == '-')
			negative *= -1;
		else if (s[j] >= 0 + '0' && s[j] < 10 + '0')
			number = number * 10 + (s[j] - '0');
		else if (s[j - 1] >= 0 + '0' && s[j - 1] < 10 + '0')
			break;
	}

	return (number * negative);
}

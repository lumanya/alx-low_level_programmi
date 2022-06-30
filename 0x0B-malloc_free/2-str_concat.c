#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - return ponter of two concatenated string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string(sucess), 0 failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int l1 = 0, l2 = 0, index, i;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	concat = (char *)malloc(sizeof(char) * (l1 + l2 + 1));

	if (concat == 0)
		return (0);

	for (index = 0; index < l1; index++)
		*(concat + index) = *(s1 + index);

	for (i = index; i < (l2 + l1); i++)
		*(concat + i) = *s2++;
	*(concat + i) = '\0';

	return (concat);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * copy_word - copies a word from a string
 * @str: string to copy from
 * @start: start index of word
 * @end: end index of word
 *
 * Return: pointer to word
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);

	for (i = 0; i < end - start; i++)
		word[i] = str[start + i];
	word[i] = '\0';

	return (word);
}

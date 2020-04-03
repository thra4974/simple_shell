/**
 * printarg - print args
 * @ac: count of args
 * @av: double pointer to array
 * Return: 0
 */

int main()
{
	int i;

	while (av[i] != NULL)
	{
		_puts(av[i]);
		i++;
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}

#include <unistd.h>

int	check(char* s, char c, int pos)
{
	int i = -1;
	while (++i < pos)
		if (s[i] == c)
			return (0);
	return (1);
}

int	main(int argc, char** argv)
{
	if (argc == 3)
	{
		int i = -1;
		while (argv[1][++i])
			if(check(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
		int j = -1;
		while (argv[2][++j])
			if(check(argv[2], argv[2][j], j) && check(argv[1], argv[2][j], i))
				write(1, &argv[2][j], 1);
	}
	write (1, "\n", 1);
	return (0);
}

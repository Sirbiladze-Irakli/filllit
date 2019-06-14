#include "get_next_line.h"
#include <stdio.h>

int		 main(int ac, char **av)
{
	int fd;
	int fd1;
	int fd2;
	char	*line;

	line = NULL;
	fd = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_RDONLY);
	fd2 = open(av[3], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}

	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// get_next_line(fd1, &line);
	// printf("%s\n", line);
	// get_next_line(fd1, &line);
	// printf("%s\n", line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd1, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);

	return (0);
}
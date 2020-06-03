#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int get_next_line(const int fd, char **line);

int main(int argc, char **argv)
{
	int		fd1;
	int		n1;
	int		fd2;
	int		n2;
	char	*line1;
	char	*line2;

	if (argc != 3)
	{
		printf("Usage: ./[binary_name] [path1] [path2]\n");
		return (5);
	}
	if (((fd1 = open(argv[1], O_RDONLY)) == -1) || ((fd2 = open(argv[2], O_RDONLY)) == -1))
	{
		printf("Opening failure\n");
		return (1);
	}
	//int fd = open("large_file.txt.mine", O_CREAT | O_RDWR | O_TRUNC, 0755);
	while ((n1 = get_next_line(fd1, &line1)) == 1)
	{
		printf("file1: %s| %d\n", line1, n1);
		//write(fd, line1, strlen(line1));
		//write(fd, "\n", 1);
		free(line1);
	}
	//close(fd);
	while ((n2 = get_next_line(fd2, &line2)) == 1) 
	{
		printf("file2: %s| %d\n", line2, n2);
		free(line2);
	}
	printf("<== n1 = %d, n2 = %d ==>\n", n1, n2);
	//printf("%i == %i\n", get_next_line(fd1, &line1), get_next_line(fd2, &line2));
	if (n1 == -1 || n2 == -1)
		printf("Readind failure\n");
	//free(line1);
	//free(line2);
	close(fd1);
	close(fd2);
	return (1);
}

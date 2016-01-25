#include "get_next_line.h"
#include "libft/includes/libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	*line;
	int	fd;
	int	i;

	fd = 0;
	if (argc >= 2)
		fd = open(argv[1], O_RDONLY);	
	//else
	//{
		//ft_putendl("Veuillez selectionner un fichier.");
		//return (0);
	//}
	i = 0;
	while (get_next_line(fd, &(line)) > 0)
		ft_putendl(line);
	return (0);
}


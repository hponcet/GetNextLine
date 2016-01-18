#include "get_next_line.h"
#include "libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	*line;
	int	fd;
	int	i;

	if (argc >= 2)
		fd = open(argv[1], O_RDONLY);	
	else
	{
		ft_putendl("Veuillez selectionner un fichier.");
		return (0);
	}
	i = 0;
	while (get_next_line(fd, &(line)) > 0)
		ft_putendl(line);
	if (get_next_line(fd, &(line)) == -1)
		ft_putendl("La fonction retourne une erreur");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ????/??/?? ??:??:?? by jonsanch          #+#    #+#             */
/*   Updated: ????/??/?? ??:??:?? by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grepish.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		total;
	int		current_line;
	char	*line;

	current_line = 0;
	total = 0;
	if (argc == 2)
	{
		fd = open(argv[2], O_RDONLY);
		if (fd == -1)
		{
			printf("Error opening file %s\n", argv[2]);
			return (0);
		}
		while ((line = get_next_line(fd)) != NULL)
		{
			current_line++;
			if (ft_strstr(line, argv[1]) != 0)
			{
				printf("Line %d: %s\n",current_line, line);
				total++;
			}
			free(line);
		}
		printf("Total found lines: %d\n", current_line);
		close(fd);
	}
	else
		printf("Error in argument count\n");
	return (0);
}


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
	char	*to_find;

	current_line = 0;
	total = 0;
	if (argc == 3)
	{
		fd = open(argv[2], O_RDONLY);
		if (fd == -1)
		{
			printf("Error opening file %s\n", argv[2]);
			return (0);
		}
		to_find = ft_strdup(argv[1]);
		while ((line = get_next_line(fd)) != NULL)
		{
			current_line++;
			if (ft_strstr(line, to_find) != -1)
			{
				printf("Line %d: %s",current_line, line);
				total++;
			}
			free(line);
		}
		printf("%s : Total matching lines: %d (out of %d)\n", argv[2], total, current_line);
		close(fd);
		free(to_find);
	}
	else
		printf("Error in argument count\n");
	return (0);
}


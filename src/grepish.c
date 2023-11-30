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

void	ft_printlines(int  start, char *line, char *to_find)
{
	int		i;

	i = 0;
	printf("%.*s", start, line);
	//change printf color to red
	ft_print_red();
	printf("%s", to_find);
	//change printf color to black
	ft_print_black();
	i = start + ft_strlen(to_find);
	printf("%s\n", &line[i]);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		total;
	int		start;
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
			start = ft_strstr(line, to_find);
			if (start != -1)
			{
				ft_printlines(start, line, to_find);
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


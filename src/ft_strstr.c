/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grepish.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ????/??/?? ??:??:?? by jonsanch          #+#    #+#             */
/*   Updated: ????/??/?? ??:??:?? by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grepish.h"

int ft_strstr(const char *str, const char *to_find)
{
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (0);
	while (str[j])
	{
		k = 0;
		while (str[j + k] == to_find[k])
		{
			k++;
			if (to_find[k] == '\0')
				return (j);
		}
		j++;
	}
	return (0);
}
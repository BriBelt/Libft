/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:03:42 by bbeltran          #+#    #+#             */
/*   Updated: 2023/03/06 16:28:07 by bbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (&((char *)str)[i]);
}

#include <string.h>
int	main(void)
{
	char	*s = "There's nothing really interesting here.\nThis has no more pu";
	int c = '\n';

	printf ("Org strchr: %s\n", strchr(s, c));
	printf ("My strchr: %s\n", ft_strchr(s, c));
	return (0);
}

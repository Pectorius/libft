/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnegre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:31:14 by pnegre            #+#    #+#             */
/*   Updated: 2023/02/14 11:46:27 by pnegre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*start;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	start = ptr;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (start);
}

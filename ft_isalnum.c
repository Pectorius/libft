/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnegre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:13:33 by pnegre            #+#    #+#             */
/*   Updated: 2023/02/14 15:37:46 by pnegre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if (character >= 48 && character <= 57)
		return (1);
	else if (character >= 65 && character <= 90)
		return (1);
	else if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}

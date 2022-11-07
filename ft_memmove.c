/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:50:50 by jvigny            #+#    #+#             */
/*   Updated: 2022/10/15 13:50:50 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	while (i < n)
	{
		tmp[i] = (char)src[i];
		i++;
	}
	tmp[i] = 0;
	i = 0;
	while (i < n)
	{
		dest[i] = tmp[i];
		i++;
	}
	return (dest);
}

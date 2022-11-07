/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:36:25 by jvigny            #+#    #+#             */
/*   Updated: 2022/10/15 14:36:25 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	while (i < (n - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (n != 0)
		dest[i] == 0;
	return (len);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:53:02 by jvigny            #+#    #+#             */
/*   Updated: 2022/10/19 12:53:02 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t 	i;
	size_t	j;
	size_t	len;

	j = 0;
	i = ft_strlen(dest);
	len = ft_strlen(src);
	while (i + j < n && src[j])
	{
		dest[i + j] = src [j];
		j++;
	}
	if (i < n)
		return (len + i);
	dest[i + j] == 0;
	return (len + n);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <johanne.vgn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:53:58 by jvigny            #+#    #+#             */
/*   Updated: 2022/10/15 13:53:58 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (s[i]);
		i--;
	}
	return (0);
}

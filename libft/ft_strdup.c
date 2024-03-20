/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:34:50 by egolboyu          #+#    #+#             */
/*   Updated: 2024/03/20 16:34:58 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*mall;
	int		i;

	mall = malloc(sizeof(char) * (ft_strlen(source) + 1));
	if (!mall)
		return (NULL);
	i = 0;
	while (source[i])
	{
		mall[i] = source[i];
		i++;
	}
	mall[i] = 0;
	return (mall);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:35:46 by egolboyu          #+#    #+#             */
/*   Updated: 2024/03/20 16:35:48 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar )
{
	while (*string)
	{
		if (*string == (char) searchedChar)
			return ((char *) string);
		++string;
	}
	if ((char) searchedChar == '\0')
		return ((char *) string);
	else
		return (NULL);
}

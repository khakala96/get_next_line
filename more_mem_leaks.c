/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_mem_leaks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khakala <khakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:14:37 by khakala           #+#    #+#             */
/*   Updated: 2019/11/13 11:17:14 by khakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void memleaks(void)
{
	int i;
	char *str;

	i = 0;
	while (i < 100)
	{
		str = ft_strdup("random string.");
		i++;
	}
	free(str);
}

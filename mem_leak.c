/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_leak.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khakala <khakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:04:27 by khakala           #+#    #+#             */
/*   Updated: 2019/11/13 11:56:15 by khakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	leak(int n)
{
	char* x = malloc(n);
	char* y = malloc(n);
	// Use x for something
	// Use y for something
	free(x);
}

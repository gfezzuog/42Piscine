/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:32:08 by gfezzuog          #+#    #+#             */
/*   Updated: 2021/10/06 17:59:25 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write (1, &c, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:25:55 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/21 13:27:33 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by emre on 20.07.2023.
//
#include "ft_printf.h"

int	ft_print_addr(unsigned long long n)
{
    int	len;

    len = 0;
    len += write(1, "0x", 2);
    len += ft_print_hex(n, 'x');
    return (len);
}
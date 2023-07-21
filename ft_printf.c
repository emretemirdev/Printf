/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:26:04 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/21 13:26:36 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...) {
    va_list ap;
    int i;
    int len;

    len = 0;
    i = 0;
    va_start(ap, s);
    while (s[i]) {
        if (s[i] == '%') {
            len += ft_formats(s, ap, ++i);
        } else
            len += ft_putchar(s[i]);
        i++;
    }
    va_end(ap);
    return (len);
}

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
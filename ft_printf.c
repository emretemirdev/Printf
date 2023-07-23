/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:26:04 by emtemir           #+#    #+#             */
/*   Updated: 2023/07/23 18:02:26 by emre             ###   ########.fr       */
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

int main() {

    ft_printf("Hello, world!\n");
    ft_printf("Integer: %d\n", 42);
    ft_printf("Unsigned Integer: %u\n", 12345);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Hexadecimal: %X\n", 255);
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello");
    ft_printf("Pointer: %p\n", (void *)0x12345678);


    ft_printf("String Test 1: %s\n", "Hello, world!");
    ft_printf("String Test 2: %s %s\n", "Hello", "world!");
    ft_printf("String Test 3: %s\n", "");
    ft_printf("String Test 4: %s\n", NULL);
    ft_printf("String Test 5: %s\n", "This is a long string that exceeds the buffer size!");

    // Sayılar için deneme
    ft_printf("Number Test 1: %d\n", 123);
    ft_printf("Number Test 2: %d\n", -456);
    ft_printf("Number Test 3: %i\n", 789);
    ft_printf("Number Test 4: %u\n", 12345);
    ft_printf("%u\n", -1); // Dikkat: Burada unsigned sayı negatif olarak çıkar!


    return 0;
}
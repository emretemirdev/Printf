
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_formats(const char *str, va_list ap, int i);
int	ft_putnbr(int n);
int	ft_print_percent(void);
int	ft_putnbr_u(unsigned long n);
int	ft_print_hex(unsigned long long n, char format);
int	ft_print_addr(unsigned long long n);

#endif
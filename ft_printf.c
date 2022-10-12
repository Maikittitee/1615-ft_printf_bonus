#include "ft_printf.h"

static ft_init_format(t_what *format);
{
	format->count = 0;
    format->print_type = 0;
	format->width = 0;
    format->minus = 0;
    format->zero = 0;
	format->dot = 0;
	format->hash = 0;
	format->space = 0;
	format->plus = 0;
}

int ft_printf(const char *str, ...)
{
    va_list args;
	t_what *format;
    int	i;
	int count;

	i = 0;
	count = 0;
	format = malloc(sizeof(t_what));
	if (!format)
		return (0);
    va_start(args, str);
    while (str[i])
	{
		if (str[i] == '%')
		{
			ft_check_flag(str + i, format); //need declare
			count += ft_print_flag(format, args); //need declare
			ft_init_format(format); //need declare
			i++;
		}
		else
			count += ft_putchar_count(str[i]);
	}
	return (count);
}
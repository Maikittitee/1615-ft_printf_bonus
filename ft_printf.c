#include "ft_printf.h"

static void	ft_init_format(t_what *format)
{
	format->total_count = 0;
	format->index = 0;
	format->return_count = 0;
    format->print_type = 0;
	format->width = 0;
    format->minus = 0;
    format->zero = 0;
	format->dot = 0;
	format->hash = 0;
	format->space = 0;
	format->plus = 0;
}

static int	is_type(char c,t_what stu)
{
	char type_list[12] = "cspdouxX";
	size_t	i;

	i = 0;
	while (type_list[i])
	{
		if (type_list[i] == c)
		{
			stu.print_type = c;
			return (1);
		}
		i++;
	}
	return (0);

}

static size_t	count_flag_len(const char *str, t_what stu)
{
	size_t	flag_len;

	flag_len = 1;
	while (str[stu.index] && !is_type(str[stu.index], stu))
	{
		stu.index++;
		flag_len++;
	}
	return (flag_len);
}

static void ft_check_flag(const char *str, t_what stu, va_list args)
{
	size_t	flag_len;
	char	*fstr;

	stu.index++;
	if (str[stu.index] == '%')
		ft_putchar_count('%', stu);
	flag_len = count_flag_len(str, stu);

}

int ft_printf(const char *str, ...)
{
    va_list args;
	t_what stu;


	ft_init_format(&stu);
    va_start(args, str);
    while (str[stu.index])
	{
		if (str[stu.index] == '%')
		{
			ft_check_flag(str, stu, args);
			stu.index++;
		}
		else
			ft_putchar_count(str[stu.index],stu);
		stu.index++;
	}
	return (stu.return_count);
}

int	main()
{
	t_what test;

	ft_init_format(&test);

	//ft_printf("wh%%at\n");
	printf("%zu\n",count_flag_len("1234d",test));
	//printf("%zu\n",is_type('d',test));
}

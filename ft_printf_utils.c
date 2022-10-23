#include "ft_printf.h"

void ft_putchar_count(char c, t_what stu)
{
	write(1, &c, 1);
	stu.return_count ++;
	stu.index++;
}

// int	ft_pointer_count(unsigned long long n)
// {
// 	int count;

// 	count = 0;
// 	count += ft_putstr_count("0x");
// 	count += ft_putnbr_x_count(n);
// 	return (count);
// }



// int ft_putnbr_d_count(int n)
// {
//     int count;

//     count = 0;
// 	if (n == -2147483648)
// 	{
// 		count +=ft_putnbr_d_count(-1 * 214748364);
// 		count += ft_putchar_count('8');
// 		return (11);
// 	}
// 	if (n < 0)
// 	{
// 		count += ft_putchar_count('-');
// 		count += ft_putnbr_d_count(-1 * n);
// 	}
// 	else if (n <= 9)
// 	{
// 		count += ft_putchar_count(n + '0');
// 	}
// 	else
// 	{
// 		count += ft_putnbr_d_count(n / 10);
// 		count += ft_putnbr_d_count(n % 10);
// 	}
//     return (count);
// }

// int	ft_putnbr_u_count(unsigned int n)
// {
//     int count;

//     count = 0;
// 	if (n <= 9)
// 		count += ft_putchar_count(n + '0');
// 	else
// 	{
// 		count += ft_putnbr_u_count(n / 10);
// 		count += ft_putnbr_u_count(n % 10);
// 	}
//     return (count);
// }


// int	ft_putnbr_ux_count(unsigned int n)
// {
// 	int count;

// 	count = 0;

// 	if (n < 16)
// 		count += ft_putchar_count("0123456789ABCDEF"[n]);
// 	else
// 	{
// 		count += ft_putnbr_ux_count(n / 16);
// 		count += ft_putnbr_ux_count(n % 16);
// 	}
// 	return (count);
// }


// int	ft_putnbr_x_count(unsigned long long n)
// {
// 	int count;

// 	count = 0;

// 	if (n < 16)
// 		count += ft_putchar_count("0123456789abcdef"[n]);
// 	else
// 	{
// 		count += ft_putnbr_x_count(n / 16);
// 		count += ft_putnbr_x_count(n % 16);
// 	}
// 	return (count);
// }


// int ft_putstr_count(const char *str)
// {
//     int count;

//     count = 0;
//     if (!str)
//     {
//         count += ft_putstr_count("(null)");
//         return (count);
//     }
//     while (*str)
//     {
//         count += ft_putchar_count(*str);
//         str++;
//     }
//     return (count);
// }

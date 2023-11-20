/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 23:06:20 by apple             #+#    #+#             */
/*   Updated: 2023/10/28 00:42:20 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putcharo(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printfhandler(va_list input, const char type)
{
	int		chars_printed;

	chars_printed = 0;
	if (type == 'd' || type == 'i')
		chars_printed += ft_handle_di(va_arg(input, int));
	else if (type == 'u')
		chars_printed += ft_handle_u(va_arg(input, unsigned int));
	else if (type == 'x' || type == 'X')
		chars_printed += ft_print_hex(va_arg(input, unsigned int), type);
	else if (type == 'c')
		chars_printed += ft_handle_c(va_arg(input, int));
	else if (type == 's')
		chars_printed += ft_handle_s(va_arg(input, char *));
	else if (type == 'p')
		chars_printed += ft_print_pointer(va_arg(input, void *));
	else if (type == '%')
		chars_printed += ft_print_percent();
	return (chars_printed);
}

int	ft_printf(const char *to_be_printed, ...)
{
	va_list	conversions;
	int		chars_printed;

	if (to_be_printed == NULL)
		return (0);
	chars_printed = 0;
	va_start(conversions, to_be_printed);
	while (*to_be_printed)
	{
		if (*to_be_printed == '%')
		{
			to_be_printed++;
			chars_printed += ft_printfhandler(conversions, *to_be_printed);
		}
		else
			chars_printed += ft_putcharo(*to_be_printed);
		to_be_printed++;
	}
	va_end(conversions);
	return (chars_printed);
}
// int	main(void)
// {
// 	int	target_dummy;

// 	target_dummy = 1337;
// 	ft_printf("DIGITS: %d", 69);
// 	ft_printf("DIGITS: %i", 69);
// 	ft_printf("POINTER: %p", target_dummy);
// 	ft_printf("Length of Digits", ft_printf("DIGITS: %i", 69));
// 	return(0);
// }

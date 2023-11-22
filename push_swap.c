#include "push_swap.h"

// resource : https://www.youtube.com/watch?v=K0XXVSL4wUo
// resource : https://medium.com/@ayogun/push-swap-c1f5d2d41e97

// void	argument_printer(int *idk)
// {
// 	int			i;

// 	i = 0;
// 	while (idk[i])
// 	{
// 		ft_printf("%i\n", idk[i]);
// 		i++;
// 	}
// 	ft_printf("%s\n, %i", "placeholder", idk);
// }

// void	push_swap(char *array)
// {
// 	// will pop -->
// 	// swap, rotate,
// 	// and reverse(and simult. in both)
// }

// int	main(int argc, char *argv[])
// {
// 	int	*array;
// 	int	i;

// 	//
// 	// we want to convert the argvs to integers and shove them in an array
// 	if (argc < 0)
// 		return (-1);
// 	i = 3;
// 	ft_printf("%c", argv[i]);
// 	while (argv[i])
// 	{
// 		array[i - 2] = ft_atoi(argv[i]);
// 		// ft_printf("%i", (array[i - 2]));
// 		i++;
// 	}
// 	// argument_printer(array);
// 	return (0);
// }

int	main(int argc, char *argv[])
{
	int	amnt_of_n;
	int	i;

	i = 1;
	amnt_of_n = argc - 1;
	while (i <= amnt_of_n)
		ft_printf("%i\n", ft_atoi(argv[i++]));
	return (0);
}

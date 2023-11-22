#include "push_swap.h"

// resource : https://www.youtube.com/watch?v=K0XXVSL4wUo
// resource : https://medium.com/@ayogun/push-swap-c1f5d2d41e97

void	argument_printer(int idk)
{
	ft_printf("%s\n, %i", "placeholder", idk);
	// will print a operation and newline
	// sa, sb, ss
	// pa, pb,

	// ra, rb, rr
	// rra, rrb, rrr

}

void	push_swap(int *array)
{
	argument_printer(array[0]);
	// will pop -->
	// swap, rotate,
	// and reverse(and simult. in both)
}

int	main(int argc, char *argv[])
{
	int	*array;
	int	i;

	array = NULL;
	// we want to convert the argvs to integers and shove them in an array
	if (argc < 3)
		return (-1);
	i = 2;
	while (argv[i])
	{
		array[i - 2] = ft_atoi(argv[i]);
		i++;
	}
	push_swap(array);
	return (0);
}

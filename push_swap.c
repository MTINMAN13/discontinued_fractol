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

typedef struct s_stack_member
{
	int						value;
	int						current_index;
	int						which_stack;
}				value;

stack	*ft_newvalue(void *content, int	index_number)
{
	value	*node;

	node = (stack *)malloc(sizeof(stack));
	if (node == NULL)
		return (NULL);
	node->value = content;
	node->next = NULL;
	return (node);
}

/////                  ---                       PROCESSING  FUCKING LINKED LIST                    ------------           ///////////

/*

sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.

 */



sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.



ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.

stack	*ft_newstack(void *content, int	index_number)
{
	stack	*new_node;

	new_node = (stack *)malloc(sizeof(stack));
	if (new_node == NULL)
		return (NULL);
	new_node->value = content;
	new_node->next = NULL;
	return (new_node);
}


int	main(int argc, char *argv[])
{
	int		amnt_of_n;
	int		i;
	stack	stackone;
	stack	stackb;

	i = 1;
	amnt_of_n = argc - 1;
	while (i <= amnt_of_n)
		ft_printf("%i\n", ft_atoi(argv[i++]));
	return (0);
}

#include "pushswap.h"

void	swap(t_stack *a, t_stack *b)
{
	if (a->top && a->top->next && *(int*)a->top->content < *(int*)a->top->next->content)
		sa(&(a->top), 1);
	if (b->top && b->top->next && *(int*)b->top->content > *(int*)b->top->next->content)
		sb(&(b->top), 1);
}

void	move_to_b(t_stack *a, t_stack *b, int chunk_size)
{
	int	i;
	int	steps;

	while (a->size > 0)
	{
		i = 0;
		while (i < chunk_size && a->size > 0)
		{
			ft_max(a);
			steps = get_steps_to_max(a);

			if (steps <= a->size / 2)
				while (steps--)
					ra(&(a->top), 1);
			else
				while (steps++ < a->size)
					rra(&(a->top), 1);

			swap(a, b);
			pb(&(a->top), &(b->top));
			i++;
		}
	}
}

void	move_to_a(t_stack *a, t_stack *b)
{
	int	steps;

	while (b->size > 0)
	{
		ft_min(b);
		steps = get_steps_to_min(b);

		if (steps <= b->size / 2)
			while (steps--)
				rb(&(b->top), 1);
		else
			while (steps++ < b->size)
				rrb(&(b->top), 1);

		swap(a, b);
		pa(&(b->top), &(a->top));
	}
}

void	turkish_sort(t_stack *a, t_stack *b)
{
	int	chunk_size;

	chunk_size = (a->size / 7) + 1;

	move_to_b(a, b, chunk_size);

	while (b->size > 0)
		move_to_a(a, b);
}

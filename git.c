void move_to_b(t_stack *stack_a, t_stack *stack_b)
{
    ft_min(stack_a);
    ft_max(stack_a);
    if (stack_a->top == stack_a->min_node)
        pb(&(stack_a->top), &(stack_b->top));
    else
    {
        int steps = get_steps_to_min(stack_a);
        if (steps <= stack_a->size / 2)
            rotate_a(stack_a, steps);
        else
            reverse_rotate_a(stack_a, stack_a->size - steps);
        pb(&(stack_a->top), &(stack_b->top));
    }
}

void rotate_a(t_stack *stack_a, int steps)
{
    if (steps > 0)
    {
        ra(&(stack_a->top), 1);
        rotate_a(stack_a, steps - 1);
    }
}

void reverse_rotate_a(t_stack *stack_a, int steps)
{
    if (steps > 0)
    {
        rra(&(stack_a->top), 1);
        reverse_rotate_a(stack_a, steps - 1);
    }
}

void move_to_a(t_stack *stack_a, t_stack *stack_b)
{
    ft_min(stack_b);
    if (stack_b->top == stack_b->min_node)
        pa(&(stack_b->top), &(stack_a->top));
    else
    {
        int steps = get_steps_to_min(stack_b);
        if (steps <= stack_b->size / 2)
            rotate_b(stack_b, steps);
        else
            reverse_rotate_b(stack_b, stack_b->size - steps);
        pa(&(stack_b->top), &(stack_a->top));
    }
}

void rotate_b(t_stack *stack_b, int steps)
{
    if (steps > 0)
    {
        rb(&(stack_b->top), 1);
        rotate_b(stack_b, steps - 1);
    }
}

void reverse_rotate_b(t_stack *stack_b, int steps)
{
    if (steps > 0)
    {
        rrb(&(stack_b->top), 1);
        reverse_rotate_b(stack_b, steps - 1);
    }
}

void turkish_sort(t_stack *stack_a, t_stack *stack_b)
{
    if (!is_sort(&(stack_a->top)))
    {
        move_to_b(stack_a, stack_b);
        if (stack_b->size <= 10)
            turkish_sort(stack_a, stack_b);
    }
    else
    {
        while (stack_b->size > 0)
            move_to_a(stack_a, stack_b);
    }
}


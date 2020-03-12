void	ft_swap(int *a, int *b)
{
	int c;

	if (!(a) && !(b))
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

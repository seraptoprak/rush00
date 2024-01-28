/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalik <abalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:21:34 by abalik            #+#    #+#             */
/*   Updated: 2024/01/28 15:23:00 by abalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 0;
	ft_putchar ('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
}

void	middle_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('*');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('*');
	}
}

void	last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('\\');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	int	middle_line_count;

	middle_line_count = y - 2;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (x > 0 && y > 0)
	{
		first_line(x);
		while (middle_line_count > 0)
		{
			ft_putchar('\n');
			middle_line(x);
			middle_line_count = middle_line_count - 1;
		}
		ft_putchar('\n');
		if (y > 1)
			last_line(x);
	}
}

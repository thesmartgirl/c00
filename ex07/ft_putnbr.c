#include <unistd.h>
void    ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
    if(nb < 0)
    {
    		ft_putchar('-');
				nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + 48);
	}

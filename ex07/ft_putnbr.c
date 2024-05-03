#include <unistd.h>
void    ft_putchar(char c)
{
	write (1, &c, 1);
}

void    write_digits(int nb)
{
  if(nb > 10)
    write_digits(nb / 10);
  ft_putchar((nb%10)+'0');
}

void    ft_putnbr(int nb)
{
    if(nb < 0)
    {
      if (nb == -2147483648)
  			write(1, "-2147483648", 11);
    	else
    	{
            ft_putchar('-');
            nb = nb * -1;
            write_digits(nb);
      }
    }
    else
        write_digits(nb);
}

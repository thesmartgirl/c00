#include <unistd.h>

void	ft_putchar(char c)
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

void find_first(int n)
{
  if (n > 1) {
    find_first(n - 1);
  }
  ft_putchar(n + '0');
}

void find_last(int n)
{
  ft_putchar(n + '0');
  if (n > 1) {
    find_last(n - 1);
  }
}

void ft_print_combn(int n) {
  int i;

  i = find_first(n);
  while (i <= find_last(n))
  {
    ft_putnbr(i);
    i++;
  }
}

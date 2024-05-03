#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print2(int i)
{
  if (i < 10) {
    ft_putchar('0');
    ft_putchar(i + '0');
  }
  else
  {
    ft_putchar((i / 10) +'0');
    ft_putchar((i % 10) + '0');
  }
}

void	ft_print_comb2(void)
{
	int i;
	int j;

    i = 0;
    while (i <= 98) {
        j = i + 1;
        while(j <= 99)
        {
            ft_print2(i);
            ft_putchar(' ');
            ft_print2(j);
            if (i < 98) {
              ft_putchar(',');
              ft_putchar(' ');
            }

            j++;
        }
    i++;
  }
}

#include <unistd.h>
void ft_print_alphabet (void);
void ft_putchar(char c);

int main ()
{
ft_print_alphabet();
return 0;
}

void ft_print_alphabet()
{
char c;
int i;

c = 'a';
i = 0;

while (i < 26)
{
ft_putchar(c);
c++; 
i++;
}

}

void ft_putchar(char c)
{
write ( 1, &c, 1);
}

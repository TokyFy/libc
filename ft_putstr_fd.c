#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
  t_size_t ln = ft_strlen(s);
  write(fd, s, ln);
}

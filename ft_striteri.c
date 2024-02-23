void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  char* ptr = s;
  while (*ptr) {
    f(ptr - s , ptr);
    ptr++;
  }
}

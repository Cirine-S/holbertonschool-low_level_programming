#include <stdio.h>

/**
 * main - prints out the first 100 fibonancci numbers
 *
 * Return:0
 */

int main(void)
{
  long i, j, count, sum, sum_ac, sum_bd;
  long a, b, c, d;

  i = 0;
  j = 1;
  for (count = 0; count < 91; count++)
    {
      sum = i + j;
      i = j;
      j = sum;
      printf("%ld, ", sum);
    }
  a = i / 10000000000;
  b = i % 10000000000;
  c = j / 10000000000;
  d = j % 10000000000;
  for (; count < 98; count++)
    {
      sum_ac = a + c;
      sum_bd = b + d;
      if (sum_bd > 10000000000)
	{
	  sum_bd %= 10000000000;
	  sum_ac++;
	}
      if (count != 97)
	{
	  printf("%ld%ld, ", sum_ac, sum_bd);
	  a = c;
	  b = d;
	  c = sum_ac;
	  d = sum_bd;
	}
      else
	printf("%ld%ld\n", sum_ac, sum_bd);
    }
  return (0);
}

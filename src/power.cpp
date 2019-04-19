#include "../include/power.h"

namespace power
{
int raiseToPower(int n, int k)
{
  if (k == 0)
  {
    return 1;
  }
  else if (k == 1)
  {
    return n;
  }
  else
  {
    return n * raiseToPower(n, k - 1);
  }
}
} // namespace power

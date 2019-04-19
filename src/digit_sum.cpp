#include "../include/digit_sum.h"

namespace ds
{
int digitSum(int n)
{
  std::string number_str = std::to_string(n);
  if (number_str.size() == 1)
  {
    return n;
  }
  else
  {
    int last_number = std::atoi(&number_str[number_str.size() - 1]);
    int rest = std::stoi(number_str.substr(0, number_str.size() - 1));
    return last_number + digitSum(rest);
  }
}
} // namespace ds

#include <arithpp.h>

#include <algorithm>
#include <limits>

namespace Arith
{

void Calculator::push(double value)
{
  values.push_back(value);
}

double Calculator::add()
{
  double sum = 0;
  std::for_each(values.begin(), values.end(), [&sum](auto const& value) { sum += value; });
  return sum;
}

double Calculator::divide()
{
  if (values.size() == 0)
  {
    return std::numeric_limits<double>::quiet_NaN();
  }

  double result = values.front();
  std::for_each(std::next(values.begin(), 1), values.end(), [&result](auto const& value) { result /= value; });
  return result;
}

} // namespace Arith
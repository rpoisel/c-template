#ifndef ARITHPP_H
#define ARITHPP_H

#include <list>

namespace Arith
{

class Calculator final
{
  public:
  Calculator() = default;
  ~Calculator() = default;

  void push(double value);
  double add();
  double divide();

  private:
  Calculator(Calculator const& c) = delete;
  Calculator& operator=(Calculator const& c) = delete;

  std::list<double> values;
};

} // namespace Arith

#endif /* ARITHPP_H */
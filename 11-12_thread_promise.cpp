#include <future>
#include <iostream>
#include <unistd.h>

using namespace std;

using FactorialPromise = promise< long long >;

long long Factorial(unsigned int value)
{
  return value == 1 ? 1 : value * Factorial(value - 1);
}

int main(int argc, char* argv[])
{
  using namespace chrono;
  
  FactorialPromise promise;
  future<long long> taskFuture{ promise.get_future() };
  
  promise.set_value(Factorial(3));
  cout << "Factorial result was " << taskFuture.get() << endl;
  
  sleep(3);
  
  return 0;
}
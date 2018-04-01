#include <iostream>
#include <thread>

using namespace std;

int main(int argc, char const *argv[])
{
    const unsigned int numberOfProcessors{ thread::hardware_concurrency() };

    cout << "This system can run " << numberOfProcessors << " concurrent tasks" << endl;
    return 0;
}

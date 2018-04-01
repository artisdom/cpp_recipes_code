#include <iostream>
#include <boost/format.hpp>

using namespace std;

int main()
{
    std::cout << "Enter your first name: " << std::endl;
    std::string firstName;
    cin >> firstName;

    cout << "Enter your surname: " << endl;
    string surname;
    cin >> surname;

    auto formattedName = str(boost::format("%1% %2%:"s) % firstName % surname);
    cout << "Your name is: " << formattedName << endl;

    return 0;
}
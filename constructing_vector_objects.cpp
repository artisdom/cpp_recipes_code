#include <iostream>
#include <vector>

using namespace std;

int main()
{
    using MyVector = vector<int>;

    MyVector vectorA( 1 ); // size is 1, vectorA[0] defaults to 0.
    cout << vectorA.size() << " " << vectorA[0] << endl;

    MyVector vectorB( 1, 10 ); // size is 1, vectorB[0] value is 10.
    cout << vectorB.size() << " " << vectorB[0] << endl;

    return 0;
}
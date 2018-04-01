#include <cinttypes>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class MapObject
{
private:
    string m_Name;

public:
    MapObject(const string& name) : m_Name{ name }
    {
    }

    const string& GetName() const
    {
        return m_Name;
    }
};

int main(int argc, char const *argv[])
{
    unordered_map<int32_t, MapObject> myMap;
    myMap.emplace(pair<int32_t, MapObject>(5, MapObject("Five")));
    return 0;
}

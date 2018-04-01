#include <cinttypes>

class Vehicle
{
private:
    uint32_t m_NumberOfWheels{};

public:
    Vehicle() = default;

    Vehicle(uint32_t numberOfWheels) : m_NumberOfWheels{ numberOfWheels }
    {}

    ~Vehicle = default;

    uint32_t GetNumberOfWheels()
    {
        return m_NumberOfWheels;
    }
};
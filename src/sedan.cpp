#include "sedan.hpp"
#include <array>

static const std::array<double, 7> gear_ratios = {-1, 1, 2, 3, 4, 5, 6};

Sedan::Sedan() : current_gear(0)
{
    
}

void Sedan::shift_up()
{
    if (current_gear < 6) {
        current_gear++;
    }
}

void Sedan::shift_down()
{
    if (current_gear > 0){
        current_gear--;
    }
}

double Sedan::get_torque(double engine_rpm, double throttle)
{
    return engine_rpm * throttle * 100;
}

double Sedan::get_weight()
{
    return 1500;
}

double Sedan::get_wheel_radius()
{
    return 0.3;
}

double Sedan::get_current_gear_ratio()
{
    return gear_ratios[current_gear];
}
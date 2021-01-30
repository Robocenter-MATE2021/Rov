#include "Rotarycamera.h"
#include <pigpio.h>
#include "Timer.h"

RotaryCamera::RotaryCamera();
{
    m_timer = new Timer;
    defAngle = 90; 
}

RotaryCamera::RotaryCamera(uint8_t pin);
{
    m_pin = pin;  
    m_timer = new Timer;
    defAngle = 90; 
}

void RotaryCamera:: init();
{
    gpioSetMode(m_driver, PI_OUTPUT);
    gpioServo(m_driver, map(defAngle, 0, 180, 1000, 2000));
    timer->start();
    setRotationTime(30);
}

void RotaryCamera::write(int8_t angle);
{
    if (timer->elapsed() > m_rotation_time)
    {
        m_angle += angle;
        m_angle = constrain(m_angle, 1, 179);
        timer->start();
        gpioServo(m_driver, map(constrain(m_angle, 0, 180), 0, 180, 1000, 2000));
    }
}

void RotaryCamera::setRotationTime(uint8_t time);
{
    m_rotation_time = time; 
}

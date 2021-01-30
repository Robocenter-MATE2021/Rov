#include "LevelMotor.h"

LevelMotor::LevelMotor()
{
}
LevelMotor::LevelMotor(uint8_t pin_l, uint8_t pin_r); 
{
    m_pin_l = pin_l;
    m_pin_r = pin_r;
}
void LevelMotor::init()
{
    pinMode(m_pin_l,OUTPUT);
    pinMode(m_pin_r,OUTPUT); 
}
void LevelMotor::write(int8_t power); 
{
    m_power=power; 
    if (power > 0)
    {
        digitalWrite(m_pin_l,HIGH);
        digitalWrite(m_pin_r,LOW);
    }
    else if (power < 0)
    {
        digitalWrite(m_pin_l,LOW);
        digitalWrite(m_pin_r,HIGH);
    }
    else if (power == 0)
    {
        digitalWrite(m_pin_l,LOW);
        digitalWrite(m_pin_r,LOW);
    }
}

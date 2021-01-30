#ifndef ROTARYCAMERA_H
#define ROTARYCAMERA_H

#include <stdint.h>

class RotaryCamera 
{
public:
	RotaryCamera();
	RotaryCamera(uint8_t pin); 
	void init(); 
	void write(int8_t angle); 
	void setRotationTime(uint8_t time); 
private:
	Timer* m_timer;
	uint8_t m_driver; 
	uint8_t m_angle;
	int8_t m_lastangle = 0;
	int8_t defAngle;
	uint8_t m_rotation_time;
};

#endif // !ROTARYCAMERA_H

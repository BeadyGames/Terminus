#pragma once

#include <QColor>
#include <QPainter>
#include <QPoint>
#include <QSize>


/********************************* Vehicle ************************************/
/* 
    Contains all position and colour data for a vehicle
	Every Vehicle has a fleet number, running number and trip number

	Yellow = Good headway to bus in front
	Red = Too close to bus in front (acceptable in some cases)
	Green = Extended headway (this might be acceptable when delays are present)

	File:   vehicle.h
	Author: Nathan Gardner
	Date:   18th June 2026
*/
/******************************************************************************/

class Vehicle
{
public:

	Vehicle(QPoint position, QSize size, QColor colour);

	QPoint position() const;
	QSize size() const;
	QColor colour() const;

	void setPosition(QPoint position);
	void setSize(QSize size);
	void setColour(QColor colour);
	
	void move(int dx, int dy);

	void draw(QPainter& painter) const;

private:

	QPoint m_position;
	QSize m_size;
	QColor m_colour;
};

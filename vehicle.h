#pragma once

#include <QColor>
#include <QPainter>
#include <QPoint>

/********************************* Vehicle ************************************/
/* 
    Contains all position and colour data for a vehicle

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

	Vehicle(QPoint pos, QColor col);

	QPoint position() const;
	QColor colour() const;

	void set_position(QPoint position);
	void set_colour(QColor colour);

	void move(int dx, int dy);

	void draw(QPainter& painter) const;

private:

	QPoint m_position;
	QColor m_colour;
	QSize m_size;
};

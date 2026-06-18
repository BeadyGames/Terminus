#include "vehicle.h"

/********************************* Vehicle ************************************/
/*
    Contains all position and colour data for a vehicle

    Yellow = Good headway to bus in front
    Red = Too close to bus in front (acceptable in some cases)
    Green = Extended headway (this might be acceptable when delays are present)

    File:   vehicle.cpp
    Author: Nathan Gardner
    Date:   18th June 2026
*/
/******************************************************************************/

Vehicle::Vehicle(QPoint position, QSize size, QColor colour) :
    m_position{position}, m_size{size}, m_colour {colour}
{
    
}

QPoint Vehicle::position() const
{
    return m_position;
}

QSize Vehicle::size() const
{
    return m_size;
}

QColor Vehicle::colour() const
{
    return m_colour;
}

// The colour is set according to the stop where the bus is at
void Vehicle::setPosition(QPoint position)
{
    m_position = position;
}

void Vehicle::setColour(QColor colour)
{
    m_colour = colour;
}

void Vehicle::move(int dx, int dy)
{
    m_position += QPoint{ dx, dy };
}

void Vehicle::draw(QPainter& painter) const
{
    painter.setBrush(m_colour);
    painter.setPen(Qt::NoPen);
    painter.drawRect(QRect{ m_position, m_size });
}

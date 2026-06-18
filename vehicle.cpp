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

#include "vehicle.h"

Vehicle::Vehicle(QPoint p, QColor c) :
    m_position{p}, m_colour{c}
{

}

QPoint Vehicle::position() const
{
    return m_position;
}

QColor Vehicle::colour() const
{
    return m_colour;
}

void Vehicle::set_position(QPoint position)
{
    m_position = position;
}

void Vehicle::set_colour(QColor colour)
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

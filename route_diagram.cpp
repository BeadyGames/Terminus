#include "route_diagram.h"
#include <QPainter>

RouteDiagram::RouteDiagram(QWidget* parent)
	: QWidget{parent}
{}

void RouteDiagram::paintEvent(QPaintEvent* event)
{
	QWidget::paintEvent(event);

	QPainter painter{ this };

	painter.setBrush(Qt::red);
	painter.setPen(Qt::NoPen);

	painter.drawRect(100, 100, 120, 40);
}
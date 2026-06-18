#pragma once

#include <QWidget>

class RouteDiagram : public QWidget
{
public:
	explicit RouteDiagram(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* event) override;
};


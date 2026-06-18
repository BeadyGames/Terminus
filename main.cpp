#include <QApplication>

#include "route_diagram.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	RouteDiagram window;
	window.resize(800, 500);
	window.setWindowTitle("Terminus");
	window.show();

	return app.exec();
}
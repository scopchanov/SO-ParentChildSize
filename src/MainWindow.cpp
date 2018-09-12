#include "MainWindow.h"
#include "ParentWidget.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	setCentralWidget(new ParentWidget(this));
}

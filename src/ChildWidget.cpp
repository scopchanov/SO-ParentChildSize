#include "ChildWidget.h"
#include <QPainter>

ChildWidget::ChildWidget(QWidget *parent) :
	QWidget(parent)
{

}

void ChildWidget::paintEvent(QPaintEvent * /*event*/)
{
	QPainter p(this);

	p.fillRect(rect(), Qt::green);
}

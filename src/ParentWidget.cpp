#include "ParentWidget.h"
#include "ChildWidget.h"
#include <QResizeEvent>
#include <QPainter>
#include <QDebug>

ParentWidget::ParentWidget(QWidget *parent) :
	QWidget(parent),
	m_child(new ChildWidget(this))
{
	m_child->move(10, 20);
	m_child->resize(60, 40);
}

void ParentWidget::resizeEvent(QResizeEvent *event)
{
	QWidget::resizeEvent(event);

	int oldWidth = event->oldSize().width();

	if (oldWidth >= 0)
		m_child->resize(m_child->width() + event->size().width() - oldWidth,
						m_child->height() + event->size().height() - event->oldSize().height());
}

void ParentWidget::paintEvent(QPaintEvent * /*event*/)
{
	QPainter p(this);

	p.fillRect(rect(), Qt::red);
}

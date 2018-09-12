#ifndef CHILDWIDGET_H
#define CHILDWIDGET_H

#include <QWidget>

class ChildWidget : public QWidget
{
	Q_OBJECT
public:
	explicit ChildWidget(QWidget *parent = nullptr);

protected:
	void paintEvent(QPaintEvent *) override;
};

#endif // CHILDWIDGET_H

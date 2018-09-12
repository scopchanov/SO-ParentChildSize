#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>

class ChildWidget;

class ParentWidget : public QWidget
{
	Q_OBJECT
public:
	explicit ParentWidget(QWidget *parent = nullptr);

	// QWidget interface
protected:
	void resizeEvent(QResizeEvent *event) override;
	void paintEvent(QPaintEvent *) override;

private:
	ChildWidget *m_child;
};

#endif // PARENTWIDGET_H

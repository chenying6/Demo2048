#ifndef DEMO2048_H
#define DEMO2048_H
#include "qwidget.h"
#include "ui_ui.h"
class Ui_Form;
namespace Ui {
	class Demo2048:public Ui_Form{};
}
class Demo2048 :public QWidget {
	Q_OBJECT
public:
	Demo2048(QWidget* parent = 0);
	~Demo2048();
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void changeColor();
	void MoveLeftUp();
	void MoveLeftDown();
	void MoveRightUp();
	void MoveRightDown();
private:
	Ui_Form* ui;
	QPoint pressPos;
};
#endif // !DEMO2048_H

#ifndef DEMO2048_H
#define DEMO2048_H
#include <vector>
#include "qwidget.h"
#include "ui_ui.h"
class Ui_Form;
using std::vector;
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
	void MoveLeft();
	void MoveDown();
	void MoveUp();
	void MoveRight();
	void setColorWord(int i, int j, QString num, int color);
	void generateWord(int num);
private:
	Ui_Form* ui;
	QPoint pressPos;
	int matrix[16];
};
#endif // !DEMO2048_H

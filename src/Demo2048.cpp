#include <iostream>
#include "qapplication.h"
#include "qevent.h"
#include "qpoint.h"
#include "Demo2048.h"
Demo2048::Demo2048(QWidget *parent)	: QWidget(parent) {
	ui = new Ui_Form;
	ui->setupUi(this);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			QLayoutItem* temp = ui->gridLayout->itemAtPosition(i, j);
			QLabel* labelTemp = (QLabel*)temp->widget();
			QFont font;
			font.setBold(true);
			font.setWeight(75);
			font.setPointSize(16);
			labelTemp->setFont(font);
			labelTemp->setText("");
			QPalette palette;
			QBrush brush1(QColor(255, 255, 127, 255));
			brush1.setStyle(Qt::SolidPattern);
			palette.setBrush(QPalette::Active, QPalette::Window, brush1);
			palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
			palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
			labelTemp->setPalette(palette);
		}
	}
	
	
}
Demo2048::~Demo2048() {

}
void Demo2048::mousePressEvent(QMouseEvent *event) {
	if (event->button() == Qt::LeftButton) {
		pressPos = event->globalPos();
	}
}

void Demo2048::mouseReleaseEvent(QMouseEvent *event) {
	if (event->button()==Qt::LeftButton) {
		QPoint temp = event->globalPos() - pressPos;
		std::cout << temp.x()<<" "<<temp.y() << std::endl;
		if (temp.y() >0&&temp.x()>0) {
			MoveRightDown();
		}
		if(temp.y()>0&&temp.x() < 0) {
			MoveLeftDown();
		}
		if (temp.y() < 0 && temp.x()>0) {
			MoveRightUp();
		}
		if (temp.y() < 0 && temp.x() < 0) {
			MoveLeftUp();
		}
	}
}
void Demo2048::changeColor() {
	std::cout << "Change Color..." << std::endl;
}
void Demo2048::MoveLeftUp() {
	std::cout << "Move Left Up..." << std::endl;
}
void Demo2048::MoveLeftDown() {
	std::cout << "Move Left Down..." << std::endl;
}
void Demo2048::MoveRightUp() {
	std::cout << "Move Right Up..." << std::endl;
}
void Demo2048::MoveRightDown() {
	std::cout << "Move Right Down..." << std::endl;
}
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	Demo2048 Demo2048;
	Demo2048.show();
	return app.exec();
}
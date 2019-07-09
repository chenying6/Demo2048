#include <iostream>
#include "qapplication.h"
#include "qevent.h"
#include "qpoint.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>
#include <Windows.h>
#include <stack.h>
#include "Demo2048.h"
using std::stack;
Demo2048::Demo2048(QWidget *parent)	: QWidget(parent) {
	ui = new Ui_Form;
	ui->setupUi(this);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			setColorWord(i, j,"",0);
			matrix[4 * i + j] = 0;
		}
	}
	generateWord(2);
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
		if (temp.x()>0&&abs(temp.x())>=abs(temp.y())) {
			MoveRight();
		}
		if(temp.x() < 0 && abs(temp.x())>=abs(temp.y())) {
			MoveLeft();
		}
		if (temp.y() < 0 && abs(temp.x())<abs(temp.y())) {
			MoveUp();
		}
		if (temp.y() > 0 && abs(temp.x())<abs(temp.y())) {
			MoveDown();
		}
	}
}
void Demo2048::changeColor() {
	std::cout << "Change Color..." << std::endl;
}
void Demo2048::MoveLeft() {
	std::cout << "Move Left ..." << std::endl;
	generateWord(2);
}
void Demo2048::MoveDown() {
	std::cout << "Move Down..." << std::endl;
	generateWord(2);
}
void Demo2048::MoveRight() {
	std::cout << "Move Right..." << std::endl;
	bool hasMergeFlag = false;
	for (int i = 0; i < 4; i++) {
		stack<int> tempStack;
		tempStack.push(matrix[4 * i + 3]);
		for (int j = 2; j > 0; j--) {
			if (matrix[4 * i + j] == tempStack.top() && hasMergeFlag == false) {
				tempStack.pop();
				tempStack.push(2 * matrix[4 * i + j]);
				hasMergeFlag = true;
			}
			else {
				hasMergeFlag = false;
				tempStack.push(matrix[4 * i + j]);
			}
		}		
	}
	generateWord(2);
}
void Demo2048::MoveUp() {
	std::cout << "Move Up..." << std::endl;
	generateWord(2);
}
void Demo2048::setColorWord(int i, int j, QString num, int color) {
	QLayoutItem* temp = ui->gridLayout->itemAtPosition(i, j);
	QLabel* labelTemp = (QLabel*)temp->widget();
	QFont font;
	font.setBold(true);
	font.setWeight(75);
	font.setPointSize(20);
	labelTemp->setFont(font);
	labelTemp->setText(num);
	QPalette palette;
	QColor colorType;
	switch (color) {
	case 0: colorType =QColor(255, 255, 127, 255);
		break;
	case 1: colorType=QColor(255, 200, 127, 255);
		break;
	case 2: colorType=QColor(255, 155, 127, 255);
		break;
	case 3: colorType=QColor(255, 100, 127, 255);
		break;
	case 4: colorType=QColor(255, 55, 127, 255);
		break;
	case 5: colorType=(255, 55, 100, 255);
		break;
	case 6: colorType=QColor(255, 55, 50, 255);
		break;
	case 7: colorType=QColor(255, 55, 25, 255);
		break;
	case 8: colorType=QColor(255, 25, 25, 255);
		break;
	case 9: colorType=QColor(255, 25, 0, 255);
		break;
	case 10: colorType=(255, 0, 0, 255);
		break;
	}
	QBrush brush1(colorType);
	brush1.setStyle(Qt::SolidPattern);
	palette.setBrush(QPalette::Active, QPalette::Window, brush1);
	palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
	palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
	labelTemp->setPalette(palette);
}
void Demo2048::generateWord(int num) {
	Sleep(500);
	srand((unsigned)time(NULL));
	int place;
	while(true) {
		place = rand() % 16;
		if (matrix[place] == 0)
			break;
	}
	matrix[place] = num;
	int x = place / 4;
	int y = place % 4;
	QString s(matrix[place] + '0');
	setColorWord(x, y, s, 1);
}

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	Demo2048 Demo2048;
	Demo2048.show();
	return app.exec();
}
/********************************************************************************
** Form generated from reading UI file 'ui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_H
#define UI_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label00;
    QLabel *label01;
    QLabel *label02;
    QLabel *label03;
    QLabel *label10;
    QLabel *label11;
    QLabel *label12;
    QLabel *label13;
    QLabel *label20;
    QLabel *label21;
    QLabel *label22;
    QLabel *label23;
    QLabel *label30;
    QLabel *label31;
    QLabel *label32;
    QLabel *label33;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(398, 431);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 0, 101, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 397, 381));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label00 = new QLabel(layoutWidget);
        label00->setObjectName(QStringLiteral("label00"));
        QPalette palette;
        QBrush brush(QColor(204, 232, 207, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 170, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label00->setPalette(palette);
        label00->setFont(font);
        label00->setAutoFillBackground(true);
        label00->setStyleSheet(QStringLiteral(""));
        label00->setFrameShape(QFrame::Box);
        label00->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label00, 0, 0, 1, 1);

        label01 = new QLabel(layoutWidget);
        label01->setObjectName(QStringLiteral("label01"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label01->setPalette(palette1);
        label01->setFont(font);
        label01->setAutoFillBackground(true);
        label01->setFrameShape(QFrame::Box);
        label01->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label01, 0, 1, 1, 1);

        label02 = new QLabel(layoutWidget);
        label02->setObjectName(QStringLiteral("label02"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label02->setPalette(palette2);
        label02->setFont(font);
        label02->setAutoFillBackground(true);
        label02->setFrameShape(QFrame::Box);
        label02->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label02, 0, 2, 1, 1);

        label03 = new QLabel(layoutWidget);
        label03->setObjectName(QStringLiteral("label03"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label03->setPalette(palette3);
        label03->setFont(font);
        label03->setAutoFillBackground(true);
        label03->setFrameShape(QFrame::Box);
        label03->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label03, 0, 3, 1, 1);

        label10 = new QLabel(layoutWidget);
        label10->setObjectName(QStringLiteral("label10"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label10->setPalette(palette4);
        label10->setFont(font);
        label10->setAutoFillBackground(true);
        label10->setFrameShape(QFrame::Box);
        label10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label10, 1, 0, 1, 1);

        label11 = new QLabel(layoutWidget);
        label11->setObjectName(QStringLiteral("label11"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label11->setPalette(palette5);
        label11->setFont(font);
        label11->setAutoFillBackground(true);
        label11->setFrameShape(QFrame::Box);
        label11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label11, 1, 1, 1, 1);

        label12 = new QLabel(layoutWidget);
        label12->setObjectName(QStringLiteral("label12"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label12->setPalette(palette6);
        label12->setFont(font);
        label12->setAutoFillBackground(true);
        label12->setFrameShape(QFrame::Box);
        label12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label12, 1, 2, 1, 1);

        label13 = new QLabel(layoutWidget);
        label13->setObjectName(QStringLiteral("label13"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label13->setPalette(palette7);
        label13->setFont(font);
        label13->setAutoFillBackground(true);
        label13->setFrameShape(QFrame::Box);
        label13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label13, 1, 3, 1, 1);

        label20 = new QLabel(layoutWidget);
        label20->setObjectName(QStringLiteral("label20"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label20->setPalette(palette8);
        label20->setFont(font);
        label20->setAutoFillBackground(true);
        label20->setFrameShape(QFrame::Box);
        label20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label20, 2, 0, 1, 1);

        label21 = new QLabel(layoutWidget);
        label21->setObjectName(QStringLiteral("label21"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label21->setPalette(palette9);
        label21->setFont(font);
        label21->setAutoFillBackground(true);
        label21->setFrameShape(QFrame::Box);
        label21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label21, 2, 1, 1, 1);

        label22 = new QLabel(layoutWidget);
        label22->setObjectName(QStringLiteral("label22"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label22->setPalette(palette10);
        label22->setFont(font);
        label22->setAutoFillBackground(true);
        label22->setFrameShape(QFrame::Box);
        label22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label22, 2, 2, 1, 1);

        label23 = new QLabel(layoutWidget);
        label23->setObjectName(QStringLiteral("label23"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label23->setPalette(palette11);
        label23->setFont(font);
        label23->setAutoFillBackground(true);
        label23->setFrameShape(QFrame::Box);
        label23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label23, 2, 3, 1, 1);

        label30 = new QLabel(layoutWidget);
        label30->setObjectName(QStringLiteral("label30"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label30->setPalette(palette12);
        label30->setFont(font);
        label30->setAutoFillBackground(true);
        label30->setFrameShape(QFrame::Box);
        label30->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label30, 3, 0, 1, 1);

        label31 = new QLabel(layoutWidget);
        label31->setObjectName(QStringLiteral("label31"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label31->setPalette(palette13);
        label31->setFont(font);
        label31->setAutoFillBackground(true);
        label31->setFrameShape(QFrame::Box);
        label31->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label31, 3, 1, 1, 1);

        label32 = new QLabel(layoutWidget);
        label32->setObjectName(QStringLiteral("label32"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label32->setPalette(palette14);
        label32->setFont(font);
        label32->setAutoFillBackground(true);
        label32->setFrameShape(QFrame::Box);
        label32->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label32, 3, 2, 1, 1);

        label33 = new QLabel(layoutWidget);
        label33->setObjectName(QStringLiteral("label33"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Base, brush);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label33->setPalette(palette15);
        label33->setFont(font);
        label33->setAutoFillBackground(true);
        label33->setFrameShape(QFrame::Box);
        label33->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label33, 3, 3, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        label->setText(QApplication::translate("Form", "2048", 0));
        label00->setText(QApplication::translate("Form", "00", 0));
        label01->setText(QApplication::translate("Form", "01", 0));
        label02->setText(QApplication::translate("Form", "02", 0));
        label03->setText(QApplication::translate("Form", "03", 0));
        label10->setText(QApplication::translate("Form", "10", 0));
        label11->setText(QApplication::translate("Form", "11", 0));
        label12->setText(QApplication::translate("Form", "12", 0));
        label13->setText(QApplication::translate("Form", "13", 0));
        label20->setText(QApplication::translate("Form", "20", 0));
        label21->setText(QApplication::translate("Form", "21", 0));
        label22->setText(QApplication::translate("Form", "22", 0));
        label23->setText(QApplication::translate("Form", "23", 0));
        label30->setText(QApplication::translate("Form", "30", 0));
        label31->setText(QApplication::translate("Form", "31", 0));
        label32->setText(QApplication::translate("Form", "32", 0));
        label33->setText(QApplication::translate("Form", "33", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_H

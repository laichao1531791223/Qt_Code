/********************************************************************************
** Form generated from reading UI file 'mycontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCONTROL_H
#define UI_MYCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyControl
{
public:
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;

    void setupUi(QWidget *MyControl)
    {
        if (MyControl->objectName().isEmpty())
            MyControl->setObjectName(QStringLiteral("MyControl"));
        MyControl->resize(455, 48);
        horizontalLayout = new QHBoxLayout(MyControl);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSlider = new QSlider(MyControl);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(MyControl);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);


        retranslateUi(MyControl);

        QMetaObject::connectSlotsByName(MyControl);
    } // setupUi

    void retranslateUi(QWidget *MyControl)
    {
        MyControl->setWindowTitle(QApplication::translate("MyControl", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyControl: public Ui_MyControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCONTROL_H

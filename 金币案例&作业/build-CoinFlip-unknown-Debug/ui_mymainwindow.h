/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName(QStringLiteral("MyMainWindow"));
        MyMainWindow->resize(400, 300);
        actionQuit = new QAction(MyMainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MyMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MyMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MyMainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionQuit);

        retranslateUi(MyMainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MyMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QApplication::translate("MyMainWindow", "MyMainWindow", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MyMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MyMainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H

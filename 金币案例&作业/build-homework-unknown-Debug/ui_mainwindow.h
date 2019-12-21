/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_4;
    QTreeView *treeView;
    QWidget *page_7;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget;
    QWidget *page_6;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_2;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_1;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_6;
    QToolButton *toolButton_5;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1072, 590);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, 9, 1054, 546));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listWidget = new QListWidget(page_3);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_3->addWidget(listWidget);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout_4 = new QHBoxLayout(page_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        treeView = new QTreeView(page_5);
        treeView->setObjectName(QStringLiteral("treeView"));

        horizontalLayout_4->addWidget(treeView);

        stackedWidget->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        horizontalLayout_5 = new QHBoxLayout(page_7);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tableWidget = new QTableWidget(page_7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout_5->addWidget(tableWidget);

        stackedWidget->addWidget(page_7);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        stackedWidget->addWidget(page_6);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_2 = new QHBoxLayout(page_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolBox = new QToolBox(page_4);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(130, 0));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 138, 444));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton_1 = new QToolButton(page);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        toolButton_1->setMinimumSize(QSize(120, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/butterfly.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_1->setIcon(icon);
        toolButton_1->setIconSize(QSize(80, 80));
        toolButton_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_1);

        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(120, 100));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Image/Sunny.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(80, 80));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(120, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Image/LuffyQ.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(80, 80));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(page);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(120, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Image/Luffy.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(80, 80));
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_4);

        toolBox->addItem(page, QString::fromUtf8("\350\213\261\351\233\204"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 138, 444));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolButton_6 = new QToolButton(page_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setMinimumSize(QSize(120, 100));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Image/OnePiece.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon4);
        toolButton_6->setIconSize(QSize(80, 80));
        toolButton_6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_2->addWidget(toolButton_6);

        toolButton_5 = new QToolButton(page_2);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setMinimumSize(QSize(120, 100));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Image/sunny.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon5);
        toolButton_5->setIconSize(QSize(80, 80));
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_2->addWidget(toolButton_5);

        toolBox->addItem(page_2, QString::fromUtf8("\345\205\266\344\273\226"));

        horizontalLayout_2->addWidget(toolBox);

        label = new QLabel(page_4);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Image/Frame.jpg")));

        horizontalLayout_2->addWidget(label);

        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1072, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionQuit);
        menu_2->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(4);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\350\265\265\344\272\221", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\347\221\236\346\226\207", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\344\272\232\347\264\242", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\345\260\217\347\202\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\345\205\211\350\276\211", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolButton_1->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("MainWindow", "\350\213\261\351\233\204\346\225\260\346\215\256", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("MainWindow", "\350\213\261\351\233\204\345\210\227\350\241\250", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("MainWindow", "\350\213\261\351\233\204\347\256\200\344\273\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\350\213\261\351\233\204", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("MainWindow", "\350\260\203\346\237\245\351\227\256\345\215\267", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\345\205\266\344\273\226", Q_NULLPTR));
        label->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

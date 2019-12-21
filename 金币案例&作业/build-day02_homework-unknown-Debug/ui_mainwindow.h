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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_vLike;
    QRadioButton *radioButton_preffer;
    QRadioButton *radioButton_like;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QLabel *label_4;
    QComboBox *comboBox_job;
    QSpinBox *spinBox_age;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *dateEdit_birthday;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_commit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(917, 662);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(130, 0));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 130, 554));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolButton = new QToolButton(page);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/butterfly1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(80, 80));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Image/LuffyQ.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(80, 80));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Image/Luffy.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        toolButton_3->setIconSize(QSize(80, 80));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(page);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Image/Sunny.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon3);
        toolButton_4->setIconSize(QSize(80, 80));
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(toolButton_4);

        toolBox->addItem(page, QString::fromUtf8("\350\213\261\351\233\204"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 130, 554));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolButton_5 = new QToolButton(page_2);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Image/sunny.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_5->setIcon(icon4);
        toolButton_5->setIconSize(QSize(80, 80));
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_2->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(page_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Image/OnePiece.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon5);
        toolButton_6->setIconSize(QSize(80, 80));
        toolButton_6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_2->addWidget(toolButton_6);

        toolBox->addItem(page_2, QString::fromUtf8("\345\205\266\344\273\226"));

        horizontalLayout->addWidget(toolBox);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(page_3);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Image/Frame.jpg")));

        horizontalLayout_2->addWidget(label);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listWidget = new QListWidget(page_4);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout_3 = new QHBoxLayout(page_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(page_5);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_3->addWidget(treeWidget);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_4 = new QVBoxLayout(page_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidget = new QTableWidget(page_6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        verticalLayout_5 = new QVBoxLayout(page_7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        widget_3 = new QWidget(page_7);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton_vLike = new QRadioButton(widget_2);
        radioButton_vLike->setObjectName(QStringLiteral("radioButton_vLike"));

        horizontalLayout_5->addWidget(radioButton_vLike);

        radioButton_preffer = new QRadioButton(widget_2);
        radioButton_preffer->setObjectName(QStringLiteral("radioButton_preffer"));

        horizontalLayout_5->addWidget(radioButton_preffer);

        radioButton_like = new QRadioButton(widget_2);
        radioButton_like->setObjectName(QStringLiteral("radioButton_like"));

        horizontalLayout_5->addWidget(radioButton_like);


        gridLayout->addWidget(widget_2, 5, 2, 1, 1);

        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_male = new QRadioButton(widget);
        radioButton_male->setObjectName(QStringLiteral("radioButton_male"));

        horizontalLayout_4->addWidget(radioButton_male);

        radioButton_female = new QRadioButton(widget);
        radioButton_female->setObjectName(QStringLiteral("radioButton_female"));

        horizontalLayout_4->addWidget(radioButton_female);


        gridLayout->addWidget(widget, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        lineEdit_name = new QLineEdit(widget_3);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 0, 2, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        comboBox_job = new QComboBox(widget_3);
        comboBox_job->setObjectName(QStringLiteral("comboBox_job"));

        gridLayout->addWidget(comboBox_job, 2, 2, 1, 1);

        spinBox_age = new QSpinBox(widget_3);
        spinBox_age->setObjectName(QStringLiteral("spinBox_age"));

        gridLayout->addWidget(spinBox_age, 3, 2, 1, 1);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 5, 1, 1, 1);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 4, 1, 1, 1);

        dateEdit_birthday = new QDateEdit(widget_3);
        dateEdit_birthday->setObjectName(QStringLiteral("dateEdit_birthday"));

        gridLayout->addWidget(dateEdit_birthday, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(page_7);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pushButton_commit = new QPushButton(widget_4);
        pushButton_commit->setObjectName(QStringLiteral("pushButton_commit"));

        horizontalLayout_6->addWidget(pushButton_commit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_5->addWidget(widget_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(page_7);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 917, 26));
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

        toolBox->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("MainWindow", "\350\213\261\351\233\204\345\210\227\350\241\250", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("MainWindow", "\350\213\261\351\233\204\347\256\200\344\273\213", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("MainWindow", "\350\213\261\351\233\204\346\225\260\346\215\256", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\350\213\261\351\233\204", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("MainWindow", "\350\260\203\346\237\245\351\227\256\345\215\267", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\345\205\266\344\273\226", Q_NULLPTR));
        label->setText(QString());
        radioButton_vLike->setText(QApplication::translate("MainWindow", "\345\276\210\345\226\234\346\254\242", Q_NULLPTR));
        radioButton_preffer->setText(QApplication::translate("MainWindow", "\346\257\224\350\276\203\345\226\234\346\254\242", Q_NULLPTR));
        radioButton_like->setText(QApplication::translate("MainWindow", "\345\226\234\346\254\242", Q_NULLPTR));
        radioButton_male->setText(QApplication::translate("MainWindow", "\347\224\267", Q_NULLPTR));
        radioButton_female->setText(QApplication::translate("MainWindow", "\345\245\263", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\220\215\345\255\227\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\350\201\214\344\270\232\357\274\232", Q_NULLPTR));
        comboBox_job->clear();
        comboBox_job->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\240\201\345\206\234", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\250\213\345\272\217\347\214\277", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\224\273\345\237\216\347\213\256", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "\345\257\271\346\234\254\350\275\257\344\273\266\347\232\204\346\204\237\350\247\211\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\347\224\237\346\227\245\357\274\232", Q_NULLPTR));
        pushButton_commit->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

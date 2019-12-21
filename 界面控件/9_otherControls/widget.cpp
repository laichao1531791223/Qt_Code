#include "widget.h"
#include "ui_widget.h"
#include <QMovie>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置label播放gif
    QMovie *movie = new QMovie("/home/laichao/Pictures/wallhaven-g8v2qd.jpg",QByteArray(),this);
    ui->label_2->setMovie(movie);
    movie->start();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

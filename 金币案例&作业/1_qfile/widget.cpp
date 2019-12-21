#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //写文件
    QFile file("file:///home/laichao/Documents");
    file.open(QIODevice::WriteOnly|QIODevice::Append);
    file.write("hello");
    file.close();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"打开一个txt",
                                 "file:///home/laichao/Documents","TXT (*.txt)");
    //对filename做判断，如果没有选择文件，那么就是个空串
    if(fileName.isEmpty())
    {
        return ;
    }
    //不为空串，选择了某个文件，将文件名显示到lineEdit
    this->ui->lineEdit->setText(fileName);

    //使用qfile来读取文件
    QFile file(fileName);
    //打开文件
    file.open(QIODevice::ReadOnly);

    //读取文件的内容
    //将所有内容全部读取出来
    //QByteArray array = file.readAll();
    QByteArray array;


    do
    {
        //单行读取
        array += file.readLine();
    }while (!file.atEnd());

    //将QBteArray转化成QString
    //QString content = QString(array);

    //使用gdk编码
    QTextCodec *codec = QTextCodec::codecForName("gbk");

    //将array转化到QString
    QString content = codec->toUnicode(array);


    //输出到edit上
    this->ui->plainTextEdit->setPlaceholderText(content);

    //获取文件信息
    QFileInfo info(fileName);
    qDebug()<<"文件全名："<<info.fileName();
    qDebug()<<"baseName："<<info.baseName();
    qDebug()<<"创建时间："<<info.created().toString("yyyy-MM-dd");
    qDebug()<<"最后修改时间："<<info.lastModified();

    //关闭文件
    file.close();
}

void Widget::on_pushButton_pressed()
{
    //鼠标按下，label文字改为 鼠标按下
    this->ui->label->setText("鼠标按下");
}

void Widget::on_pushButton_released()
{
    //鼠标松开，label文字改为 鼠标松开
    this->ui->label->setText("鼠标松开");
}

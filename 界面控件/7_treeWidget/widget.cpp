#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //使用treeWidget
    //1 设置标题
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"简介");
    //2 添加根节点
    QTreeWidgetItem *liliangItrm = new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *minjieItrm = new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhiliItrm = new QTreeWidgetItem(QStringList()<<"智力");
    ui->treeWidget->addTopLevelItem(liliangItrm);
    ui->treeWidget->addTopLevelItem(minjieItrm);
    ui->treeWidget->addTopLevelItem(zhiliItrm);
    //3 添加相应的子节点
    QStringList heroL1,heroL2,heroM1,heroM2,heroZ1,heroZ2;
    heroL1 << "刚背猪"<<"坦克";
    heroL2 << "船长"<<"坦克";

    heroM1 << "月骑"<<"战士";
    heroM2 << "小鱼人"<<"战士";

    heroZ1 <<"死灵法师"<<"法坦";
    heroZ2 <<"巫医"<<"辅助";
    liliangItrm->addChild(new QTreeWidgetItem(QStringList(heroL1)));
    liliangItrm->addChild(new QTreeWidgetItem(QStringList(heroL2)));
    minjieItrm->addChild(new QTreeWidgetItem(QStringList(heroM1)));
    minjieItrm->addChild(new QTreeWidgetItem(QStringList(heroM2)));
    zhiliItrm->addChild(new QTreeWidgetItem(QStringList(heroZ1)));
    zhiliItrm->addChild(new QTreeWidgetItem(QStringList(heroZ2)));
}

Widget::~Widget()
{
    delete ui;
}

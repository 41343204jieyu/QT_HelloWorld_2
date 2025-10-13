#include "mywidget.h"

#include <QPushButton>

#include <QHBoxLayout>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    helloButton=new QPushButton(QStringLiteral("&Hello 您好"),this);
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(helloButton);
    this->setLayout(layout);


}

MyWidget::~MyWidget() {}

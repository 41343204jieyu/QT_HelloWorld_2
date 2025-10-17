#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class QPushButton;

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    QPushButton *helloButton;
};
#endif // MYWIDGET_H

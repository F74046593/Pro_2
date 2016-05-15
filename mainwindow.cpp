#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QKeyEvent>

QTimer *timer;
QTimer *move_label_red;
QTimer *move_label_red_1;
QTimer *move_label_red_2;
QTimer *move_label_blue;
QTimer *move_label_blue_1;
QTimer *move_label_blue_2;
int cnt = 30;
int score = 0;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::timer_timeout()
{
    cnt--;
    ui->label_4->setText(QString::number(cnt));
    if(cnt==0)
    {
       timer->stop();
       move_label_red->stop();
       move_label_red_1->stop();
       move_label_red_2->stop();
       move_label_blue->stop();
       move_label_blue_1->stop();
       move_label_blue_2->stop();
       ui->label_10->hide();
       ui->label_11->hide();
       ui->label_12->hide();
       ui->label_13->hide();
       ui->label_14->hide();
       ui->label_15->hide();
       ui->label_16->hide();
       ui->label_17->hide();
       ui->label_7->hide();
       ui->label_6->hide();
       ui->label_5->hide();
       ui->label_4->hide();
       ui->label_3->hide();
       ui->label->hide();
       ui->label_8->move(QPoint(280,180));
       ui->label_9->move(QPoint(410,180));
       ui->pushButton_3->show();
       ui->pushButton_4->show();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();

    x = 770;
    x_1 = 970;
    x_2 = 1170;
    y = 180;
    a = 870;
    a_1 = 1070;
    a_2 = 1270;
    b = 180;

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),SLOT(timer_timeout()));
    timer->start(1000);

    move_label_red = new QTimer(this);
    connect(move_label_red,SIGNAL(timeout()),this,SLOT(movelabel_red()));
    move_label_red->start(6);

    move_label_red_1 = new QTimer(this);
    connect(move_label_red_1,SIGNAL(timeout()),this,SLOT(movelabel_red_1()));
    move_label_red_1->start(6);

    move_label_red_2 = new QTimer(this);
    connect(move_label_red_2,SIGNAL(timeout()),this,SLOT(movelabel_red_2()));
    move_label_red_2->start(6);

    move_label_blue = new QTimer(this);
    connect(move_label_blue,SIGNAL(timeout()),this,SLOT(movelabel_blue()));
    move_label_blue->start(6);

    move_label_blue_1 = new QTimer(this);
    connect(move_label_blue_1,SIGNAL(timeout()),this,SLOT(movelabel_blue_1()));
    move_label_blue_1->start(6);

    move_label_blue_2 = new QTimer(this);
    connect(move_label_blue_2,SIGNAL(timeout()),this,SLOT(movelabel_blue_2()));
    move_label_blue_2->start(6);

}

void MainWindow::movelabel_red()
{
    x -=1;
    ui->label_6->move(QPoint(x,y));
        if(x==10)
        {
            x += 760;
        }
}

void MainWindow::movelabel_red_1()
{
    x_1 -=1;
    ui->label_10->move(QPoint(x_1,y));
        if(x_1==10)
        {
            x_1 += 760;
        }
}

void MainWindow::movelabel_red_2()
{
    x_2 -=1;
    ui->label_12->move(QPoint(x_2,y));
        if(x_2==10)
        {
            x_2 += 760;
        }
}

void MainWindow::movelabel_blue()
{
    a -=1;
    ui->label_7->move(QPoint(a,b));
        if(a==10)
        {
            a += 760;
        }
}

void MainWindow::movelabel_blue_1()
{
    a_1 -=1;
    ui->label_11->move(QPoint(a_1,b));
        if(a_1==10)
        {
            a_1 += 760;
        }
}

void MainWindow::movelabel_blue_2()
{
    a_2 -=1;
    ui->label_13->move(QPoint(a_2,b));
        if(a_2==10)
        {
            a_2 += 760;
        }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_J)
    {
        if(x > 85)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else if(x < 35)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else
        {
            score++;
            ui->label_9->setText(QString::number(score));
            x += 760;
        }
    }

    if(event->key() == Qt::Key_J)
    {
        if(x_1 > 85)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else if(x_1 < 35)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else
        {
            score++;
            ui->label_9->setText(QString::number(score));
            x_1 += 760;
        }
    }

    if(event->key() == Qt::Key_J)
    {
        if(x_2 > 85)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else if(x_2 < 35)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else
        {
            score++;
            ui->label_9->setText(QString::number(score));
            x_2 += 760;
        }
    }

    if(event->key() == Qt::Key_F)
    {
        if(a > 85)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else if(a < 35)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else
        {
            score++;
            ui->label_9->setText(QString::number(score));
            a += 760;
        }
    }

    if(event->key() == Qt::Key_F)
    {
        if(a_1 > 85)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else if(a_1 < 35)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else
        {
            score++;
            ui->label_9->setText(QString::number(score));
            a_1 += 760;
        }
    }

    if(event->key() == Qt::Key_F)
    {
        if(a_2 > 85)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else if(a_2 < 35)
        {
            ui->label_9->setText(QString::number(score));
            score += 0;
        }
        else
        {
            score++;
            ui->label_9->setText(QString::number(score));
            a_2 += 760;
        }
    }
}



void MainWindow::on_pushButton_4_clicked()
{
    close();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label_10->show();
    ui->label_11->show();
    ui->label_12->show();
    ui->label_13->show();
    ui->label_14->show();
    ui->label_15->show();
    ui->label_16->show();
    ui->label_17->show();
    ui->label_7->show();
    ui->label_6->show();
    ui->label_5->show();
    ui->label_4->show();
    ui->label_3->show();
    ui->label->show();
    ui->label_8->move(QPoint(520,20));
    ui->label_9->move(QPoint(650,20));

    cnt = 30;

    score = 0;
    ui->label_9->setText(QString::number(score));

    ui->pushButton_3->hide();
    ui->pushButton_4->hide();

    x = 770;
    x_1 = 970;
    x_2 = 1170;
    y = 180;
    a = 870;
    a_1 = 1070;
    a_2 = 1270;
    b = 180;

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),SLOT(timer_timeout()));
    timer->start(1000);

    move_label_red = new QTimer(this);
    connect(move_label_red,SIGNAL(timeout()),this,SLOT(movelabel_red()));
    move_label_red->start(6);

    move_label_red_1 = new QTimer(this);
    connect(move_label_red_1,SIGNAL(timeout()),this,SLOT(movelabel_red_1()));
    move_label_red_1->start(6);

    move_label_red_2 = new QTimer(this);
    connect(move_label_red_2,SIGNAL(timeout()),this,SLOT(movelabel_red_2()));
    move_label_red_2->start(6);

    move_label_blue = new QTimer(this);
    connect(move_label_blue,SIGNAL(timeout()),this,SLOT(movelabel_blue()));
    move_label_blue->start(6);

    move_label_blue_1 = new QTimer(this);
    connect(move_label_blue_1,SIGNAL(timeout()),this,SLOT(movelabel_blue_1()));
    move_label_blue_1->start(6);

    move_label_blue_2 = new QTimer(this);
    connect(move_label_blue_2,SIGNAL(timeout()),this,SLOT(movelabel_blue_2()));
    move_label_blue_2->start(6);
}

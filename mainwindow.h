#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void timer_timeout();

    void on_pushButton_clicked();

    void movelabel_red();

    void movelabel_red_1();

    void movelabel_red_2();

    void movelabel_blue();

    void movelabel_blue_1();

    void movelabel_blue_2();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    int x,x_1,x_2,y,a,a_1,a_2,b;
    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *event);

};

#endif // MAINWINDOW_H

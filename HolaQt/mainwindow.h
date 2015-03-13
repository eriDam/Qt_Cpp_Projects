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
    void on_pushButton_2_clicked();//al crear el evento lo genera aquí tambien

private:
    Ui::MainWindow *ui;
   // dialog *ventana;
    //declaramos un puntero  ponemos la clase y declaramos el puntero que se va a llamar ventana
};

#endif // MAINWINDOW_H

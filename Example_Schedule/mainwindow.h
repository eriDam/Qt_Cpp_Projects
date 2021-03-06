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
    void on_pushButton_cerrar_clicked();

private slots:
    void on_pushButton_abrir_clicked();
    
    void on_toolButton_explorer_clicked();

    void on_toolButton_explorer_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

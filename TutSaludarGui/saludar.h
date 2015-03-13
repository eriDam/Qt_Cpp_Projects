#ifndef SALUDAR_H
#define SALUDAR_H

#include <QMainWindow>

namespace Ui {
class Saludar;
}

class Saludar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Saludar(QWidget *parent = 0);
    ~Saludar();

private slots:
    void on_pushButton_saludar_clicked();

private:
    Ui::Saludar *ui;
};

#endif // SALUDAR_H

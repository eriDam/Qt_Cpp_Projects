#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

#include <QMainWindow>

namespace Ui {
class HolaMundo;
}

class HolaMundo : public QMainWindow //Hereda la clase de QMainWindow
{
    //Macro de Q Object
    Q_OBJECT

public:
    explicit HolaMundo(QWidget *parent = 0);
    ~HolaMundo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_clickMe_clicked();

private:
    Ui::HolaMundo *ui;
};

#endif // HOLAMUNDO_H

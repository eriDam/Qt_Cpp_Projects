#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

#include <QMainWindow>

namespace Ui {
class HolaMundo;
}

class HolaMundo : public QMainWindow
{
    Q_OBJECT

public:
    explicit HolaMundo(QWidget *parent = 0);
    ~HolaMundo();

private:
    Ui::HolaMundo *ui;
};

#endif // HOLAMUNDO_H

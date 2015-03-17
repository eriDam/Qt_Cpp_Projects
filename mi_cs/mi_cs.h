#ifndef MI_CS_H
#define MI_CS_H

#include <QMainWindow>

namespace Ui {
class mi_cs;
}

class mi_cs : public QMainWindow
{

    Q_OBJECT

public:
    explicit mi_cs(QWidget *parent = 0);
    ~mi_cs();

private:
    Ui::mi_cs *ui;
};

#endif // MI_CS_H

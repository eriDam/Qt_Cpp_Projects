#ifndef HOLAM_H
#define HOLAM_H

#include <QMainWindow>

namespace Ui {
class HolaM;
}

class HolaM : public QMainWindow
{
    Q_OBJECT

public:
    explicit HolaM(QWidget *parent = 0);
    ~HolaM();

private:
    Ui::HolaM *ui;
};

#endif // HOLAM_H

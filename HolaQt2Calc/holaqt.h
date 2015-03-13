#ifndef HOLAQT_H
#define HOLAQT_H

#include <QMainWindow>

namespace Ui {
class HolaQt;
}

class HolaQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit HolaQt(QWidget *parent = 0);
    ~HolaQt();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::HolaQt *ui;
};

#endif // HOLAQT_H

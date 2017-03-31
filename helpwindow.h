#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QDialog>

namespace Ui {
class helpwindow;
}

class helpwindow : public QDialog
{
    Q_OBJECT

public:
    explicit helpwindow(QWidget *parent = 0);
    ~helpwindow();
private slots:
    void web_Slot();
private:
    Ui::helpwindow *ui;
    QPixmap *pix=new QPixmap;
};

#endif // HELPWINDOW_H

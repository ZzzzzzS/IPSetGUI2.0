#ifndef SETTINGWINDOW_H
#define SETTINGWINDOW_H

#include <QDialog>

namespace Ui {
class settingwindow;
}

class settingwindow : public QDialog
{
    Q_OBJECT

public:
    explicit settingwindow(QWidget *parent = 0);
    ~settingwindow();

private slots:
    void HelpSlot();
    void SaveSlot();

private:
    Ui::settingwindow *ui;
    void Set_Slots();
    void Set_Value();
};

#endif // SETTINGWINDOW_H

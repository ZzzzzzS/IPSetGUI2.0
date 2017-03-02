#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "include.h"
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
    void OfficeSlot();
    void DomitorySlot();
    void SettingSlot();

private:
    Ui::MainWindow *ui;
    void Set_Slots();
    void Set_RadioButton();
    QButtonGroup *NetWork;
};

#endif // MAINWINDOW_H

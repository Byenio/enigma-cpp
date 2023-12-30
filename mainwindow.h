#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_nextA_clicked();
    void on_prevA_clicked();
    void on_nextB_clicked();
    void on_prevB_clicked();
    void on_nextC_clicked();
    void on_prevC_clicked();
    void on_iSpace_clicked();

    void on_iQ_pressed();
    void on_iQ_released();
    void on_iW_pressed();
    void on_iW_released();
    void on_iE_pressed();
    void on_iE_released();
    void on_iR_pressed();
    void on_iR_released();
    void on_iT_pressed();
    void on_iT_released();
    void on_iZ_pressed();
    void on_iZ_released();
    void on_iU_pressed();
    void on_iU_released();
    void on_iI_pressed();
    void on_iI_released();
    void on_iO_pressed();
    void on_iO_released();
    void on_iK_pressed();
    void on_iK_released();
    void on_iL_pressed();
    void on_iL_released();
    void on_iM_pressed();
    void on_iM_released();
    void on_iJ_pressed();
    void on_iJ_released();
    void on_iN_pressed();
    void on_iN_released();
    void on_iH_pressed();
    void on_iH_released();
    void on_iB_pressed();
    void on_iB_released();
    void on_iG_pressed();
    void on_iG_released();
    void on_iV_pressed();
    void on_iV_released();
    void on_iF_pressed();
    void on_iF_released();
    void on_iC_pressed();
    void on_iC_released();
    void on_iD_pressed();
    void on_iD_released();
    void on_iX_pressed();
    void on_iX_released();
    void on_iS_pressed();
    void on_iS_released();
    void on_iY_pressed();
    void on_iY_released();
    void on_iA_pressed();
    void on_iA_released();
    void on_iP_pressed();
    void on_iP_released();

    void on_reflector_choice_currentIndexChanged(int index);

    char cipher(std::string key);

    void on_copyClipboard_clicked();
    void on_reset_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "./ui_mainwindow.h"

char ciphered{};

void MainWindow::on_iQ_pressed()
{
    ciphered = MainWindow::cipher("Q");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iQ_released()
{
    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iW_pressed()
{
    ciphered = MainWindow::cipher("W");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iW_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iE_pressed()
{
    ciphered = MainWindow::cipher("E");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iE_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iR_pressed()
{
    ciphered = MainWindow::cipher("R");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iR_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iT_pressed()
{
    ciphered = MainWindow::cipher("T");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iT_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iZ_pressed()
{
    ciphered = MainWindow::cipher("Z");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iZ_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iU_pressed()
{
    ciphered = MainWindow::cipher("U");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iU_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iI_pressed()
{
    ciphered = MainWindow::cipher("I");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iI_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iO_pressed()
{
    ciphered = MainWindow::cipher("O");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iO_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iK_pressed()
{
    ciphered = MainWindow::cipher("K");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iK_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iL_pressed()
{
    ciphered = MainWindow::cipher("L");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iL_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iM_pressed()
{
    ciphered = MainWindow::cipher("M");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iM_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iJ_pressed()
{
    ciphered = MainWindow::cipher("J");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iJ_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iN_pressed()
{
    ciphered = MainWindow::cipher("N");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iN_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iH_pressed()
{
    ciphered = MainWindow::cipher("H");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iH_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iB_pressed()
{
    ciphered = MainWindow::cipher("B");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iB_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iG_pressed()
{
    ciphered = MainWindow::cipher("G");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iG_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iV_pressed()
{
    ciphered = MainWindow::cipher("V");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iV_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iF_pressed()
{
    ciphered = MainWindow::cipher("F");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iF_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iC_pressed()
{
    ciphered = MainWindow::cipher("C");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iC_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iD_pressed()
{
    ciphered = MainWindow::cipher("D");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iD_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iX_pressed()
{
    ciphered = MainWindow::cipher("X");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iX_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iS_pressed()
{
    ciphered = MainWindow::cipher("S");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iS_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iY_pressed()
{
    ciphered = MainWindow::cipher("Y");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iY_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iA_pressed()
{
    ciphered = MainWindow::cipher("A");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iA_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iP_pressed()
{
    ciphered = MainWindow::cipher("P");
    QPushButton* target = findChild<QPushButton *>(QString(ciphered));
    target->setStyleSheet("background-color: yellow;"
                          "color: black;"
                          "border: 1px solid black;");
}

void MainWindow::on_iP_released()
{

    QPushButton* target = findChild<QPushButton* >(QString(ciphered));
    target->setStyleSheet("");
}

void MainWindow::on_iSpace_clicked()
{
    ui->output->setText(ui->output->text() + "_");
}

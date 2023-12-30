#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "helpbutton.h"
#include <QClipboard>
#include <qmessagebox.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    HelpButton *helpButton = new HelpButton();
    ui->gridLayout->addWidget(helpButton, 0, 5);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_copyClipboard_clicked()
{
    QClipboard* clipboard = QApplication::clipboard();
    clipboard->setText(ui->output->text());
}

void MainWindow::on_reset_clicked()
{
    ui->output->setText("");
}

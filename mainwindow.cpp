#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "helpbutton.h"
#include <QClipboard>
#include <qmessagebox.h>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    HelpButton *helpButton = new HelpButton();
    ui->gridLayout->addWidget(helpButton, 0, 8);
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

void MainWindow::on_saveToFileBtn_clicked()
{
    QString filename = "res.txt";
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << ui->output->text() << '\n';
    }

    QMessageBox success(this);
    success.setWindowTitle("Success");
    success.setText("File successfully created!");
    success.setStandardButtons(QMessageBox::Ok);

    success.exec();
}

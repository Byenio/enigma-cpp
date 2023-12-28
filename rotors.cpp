#include "mainwindow.h"
#include "./ui_mainwindow.h"

std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", input{};
int rotorApos{}, rotorBpos{}, rotorCpos{};

std::string rotorA = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
std::string rotorB = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
std::string rotorC = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";

std::string rotorATurnover = "W";
std::string rotorBTurnover = "F";
std::string rotorCTurnover = "R";

std::string reflectors[] = {"EJMZALYXVBWFCRQUONTSPIKHGD", "YRUHQSLDPXNGOKMIEBFZCWVJAT", "FVPJIAOYEDRZXWGCTKUQSBNMHL"};
std::string reflectorUsed = reflectors[0];

void MainWindow::on_reflector_choice_currentIndexChanged(int index)
{
    reflectorUsed = reflectors[index];
}

void MainWindow::on_nextA_clicked()
{
    rotorApos++;
    rotorApos = (26 + rotorApos)%26;
    if (rotorA[rotorApos] == rotorATurnover[0]) {
        MainWindow::on_nextB_clicked();
    }
    QChar current = alphabet[rotorApos];
    ui->rotorA->setText(current);
}

void MainWindow::on_prevA_clicked()
{
    rotorApos--;
    rotorApos = (26 + rotorApos)%26;
    if (rotorApos < 0) rotorApos = 26 - rotorApos;
    QChar current = alphabet[rotorApos];
    ui->rotorA->setText(current);
}

void MainWindow::on_nextB_clicked()
{
    rotorBpos++;
    rotorBpos = (26 + rotorBpos)%26;
    if (rotorB[rotorBpos] == rotorBTurnover[0]) {
        MainWindow::on_nextC_clicked();
    }
    QChar current = alphabet[rotorBpos];
    ui->rotorB->setText(current);
}

void MainWindow::on_prevB_clicked()
{
    rotorBpos--;
    rotorBpos = (26 + rotorBpos)%26;
    if (rotorBpos < 0) rotorBpos = 26 - rotorBpos;
    QChar current = alphabet[rotorBpos];
    ui->rotorB->setText(current);
}

void MainWindow::on_nextC_clicked()
{
    rotorCpos++;
    rotorCpos = (26 + rotorCpos)%26;
    QChar current = alphabet[rotorCpos];
    ui->rotorC->setText(current);
}

void MainWindow::on_prevC_clicked()
{
    rotorCpos--;
    rotorCpos = (26 + rotorCpos)%26;
    if (rotorCpos < 0) rotorCpos = 26 - rotorCpos;
    QChar current = alphabet[rotorCpos];
    ui->rotorC->setText(current);
}

char MainWindow::cipher(std::string input)
{
    MainWindow::on_nextA_clicked();
    int size = alphabet.length();

    std::string reflector = reflectorUsed;

    int inputIdx = alphabet.find(input);
    char rotorAValue = rotorA[(inputIdx + rotorApos)%26];
    int offsetA = alphabet.find(rotorAValue) - rotorApos;

    char rotorBValue = rotorB[(size + offsetA + rotorBpos)%26];
    int offsetB = alphabet.find(rotorBValue) - rotorBpos;

    char rotorCValue = rotorC[(size + offsetB + rotorCpos)%26];
    int offsetC = alphabet.find(rotorCValue) - rotorCpos;

    char reflectorValue = reflector[offsetC - rotorCpos];

    int refOffsetC = rotorC.find(reflectorValue) - rotorCpos;

    char refRotorBValue = alphabet[(size + refOffsetC + rotorBpos)%26];
    int refOffsetB = rotorB.find(refRotorBValue) - rotorBpos;

    char refRotorAValue = alphabet[(size + refOffsetB + rotorApos)%26];
    int refOffsetA = rotorA.find(refRotorAValue) - rotorApos;

    char res = alphabet[(size + refOffsetA)%26];

    ui->output->setText(ui->output->text() + res);
    return res;
}

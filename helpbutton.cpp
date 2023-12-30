#include "helpbutton.h"
#include "qmessagebox.h"

HelpButton::HelpButton(QWidget *parent):
    QWidget(parent)
{
    QPushButton *button = new QPushButton("ℹ️ HELP", this);
    connect(button, &QPushButton::clicked, this, &HelpButton::showHelpBox);
}

void HelpButton::showHelpBox() {
    QMessageBox help(this);

    help.setText("How to use Enigma machine:\n"
                 "\n"
                 "1. Set up rotors:\n"
                 "Increment or decrement each rotor to set them in a specific combination you want or were told to use. "
                 "Remember, both sender and reciever must set up the machine the same exact way to cipher and decipher correctly.\n"
                 "At some point, first rotor (counted from right) will increment the second one, but only once per whole spin. "
                 "The second rotor will do the same with third one.\n"
                 "\n"
                 "2. Set up reflectors:\n"
                 "Reflectors add another layer to successful cipher.\n"
                 "After the signal went through all of the rotors, they 'reflect' signal back to show on output panel.\n"
                 "\n"
                 "3. Input:\n"
                 "Enter text you recieved or message you want to cipher. '_' key stands for SPACE and does not get ciphered. It's only for user's convienience.\n"
                 "If you press and hold, the output lamp with ciphered character will light up. "
                 "Your whole ciphered message will also appear in text box below.\n"
                 "\n"
                 "You can copy [📋] ciphered text to clipboard and send it to someone.\n"
                 "You can clear [❌] existing output, but it does not reset your setup.");
    help.setWindowTitle("HELP");

    help.exec();
}

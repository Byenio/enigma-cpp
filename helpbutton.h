#ifndef HELPBUTTON_H
#define HELPBUTTON_H

#include <QPushButton>

class HelpButton : public QWidget
{
public:
    HelpButton(QWidget *parent = nullptr);

public slots:
    void showHelpBox();

};

#endif // HELPBUTTON_H

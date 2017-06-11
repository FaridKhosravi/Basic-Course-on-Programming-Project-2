//  This Project was done in a group of 2 people:
//  Mehdi Mahmoodpour   student#:267958
//  Farid Khosravi      student#:267964

#ifndef BODYMASS_H
#define BODYMASS_H

#include <QMainWindow>
#include <QDesktopWidget>

namespace Ui {
class bodymass;
}

class bodymass : public QMainWindow
{
    Q_OBJECT

public:
    explicit bodymass(QWidget *parent = 0);
    ~bodymass();
    double BMI;
    bool fem;

public slots:

    void actionReset_clicked();
    void actionQuit_clicked();
    void actionFemale_clicked();
    void actionMale_clicked();
    void Calculate_BMI();


private:

    Ui::bodymass *ui;

};

#endif // BODYMASS_H

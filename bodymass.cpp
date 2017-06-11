//  This Project was done in a group of 2 people:
//  Mehdi Mahmoodpour   student#:267958
//  Farid Khosravi      student#:267964

#include "bodymass.h"
#include "ui_bodymass.h"
#include <string>

using namespace std;

//bodymass class
bodymass::bodymass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bodymass)
{
    //Initial values
    ui->setupUi(this);
    ui->actionFemale->setChecked(true);
    ui->actionMale->setChecked(false);
    //This variable used for changing table for male and female
    fem = true;
    //Connection SLOTs
    //Reset connection
    connect(ui->actionReset, SIGNAL(triggered()), this, SLOT(actionReset_clicked()));

    //Quit connection
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(actionQuit_clicked()));

    //Female connection
    connect(ui->actionFemale, SIGNAL(triggered()), this, SLOT(actionFemale_clicked()));

    //Male connection
    connect(ui->actionMale, SIGNAL(triggered()), this, SLOT(actionMale_clicked()));

    //Height connection
    connect(ui->spinBoxHeight, SIGNAL(valueChanged(int)), this, SLOT(Calculate_BMI()));

    //Weight connection
    connect(ui->spinBoxWeight, SIGNAL(valueChanged(int)), this, SLOT(Calculate_BMI()));
}

bodymass::~bodymass()
{
    delete ui;
}

//Reset action Slot
void bodymass::actionReset_clicked()
{
    ui->spinBoxWeight->setValue(0);
    ui->spinBoxHeight->setValue(0);
    ui->labelBody->setText("-");
    ui->labelInter->setText("-");
    ui->labelGender->setText("Female");
    ui->actionFemale->setChecked(true);
    ui->actionMale->setChecked(false);
    fem = true;

}

//Quit action Slot
void bodymass::actionQuit_clicked()
{
    this->close();

}

//Female action Slot
void bodymass::actionFemale_clicked()
{
    ui->labelGender->setText("Female");
    ui->actionFemale->setChecked(true);
    ui->actionMale->setChecked(false);
    fem = true;
    Calculate_BMI();

}

//Male action Slot
void bodymass::actionMale_clicked()
{
    ui->labelGender->setText("Male");
    ui->actionFemale->setChecked(false);
    ui->actionMale->setChecked(true);
    fem = false;
    Calculate_BMI();

}

//Calculation and Interpretation Slot
void bodymass::Calculate_BMI()
{
    double weight = ui->spinBoxWeight->value();
    double height = ui->spinBoxHeight->value();
    double heightpower = height*height/10000;
    double BMI = weight/(heightpower);
    QString BMI_out= QString::number(BMI);
    if (weight== 0 || height==0){
        ui->labelBody->setText("-");
        ui->labelInter->setText("-");
    }else{
    ui->labelBody->setText(BMI_out);

    if (fem) {
        if(BMI <= 19.1){

            ui->labelInter->setText("underweight");

        } else if(BMI >= 19.1 && BMI<= 25.8){

            ui->labelInter->setText("normal");

        } else if(BMI >= 25.8 && BMI<= 27.3){

            ui->labelInter->setText("slight overweight");

        } else if(BMI >= 27.3 && BMI<= 32.2){

            ui->labelInter->setText("overweight");

        } else {
             ui->labelInter->setText("much overweight");

        }
     } else {
        if(BMI <= 20.7){

              ui->labelInter->setText("underweight");

          } else if(BMI >= 20.7 && BMI<= 26.4){

              ui->labelInter->setText("normal");

          } else if(BMI >= 26.4 && BMI<= 27.8){

              ui->labelInter->setText("slight overweight");

          } else if(BMI >= 27.8 && BMI<= 31.1){

              ui->labelInter->setText("overweight");

          } else {
              ui->labelInter->setText("much overweight");
          }
      }
    }
}


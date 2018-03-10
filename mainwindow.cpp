#include "mainwindow.h"
#include <QRect>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    restart_button = new QPushButton(this);
    button_korotkosherstnaya = new QPushButton(this);
    button_dlinosherstnaya = new QPushButton(this);
    //Каков рост собаки
    button_menee50sm = new QPushButton(this);
    //У собаки короткий или длинный хвост
        button_korotkiy = new QPushButton(this); //Английский бульдог

        button_dlinniy = new QPushButton(this);
        //Длинные или короткие уши у собаки
            button_ushidlinnie = new QPushButton(this); //Гончая
            button_ushikorotkie = new QPushButton(this);
                //Тело длинное или короткое
                    button_telodlinnoe = new QPushButton(this); //Мопс
                    button_telokorotkoe = new QPushButton(this); //Чихуахуа


        button_bolee50sm = new QPushButton(this);
        //Собака весит более или менее 50кг
            button_vesbolee = new QPushButton(this);
            button_vesmenee = new QPushButton(this);

            //Скрываем кнопки, (лень лезть в библиотеку менять конструктор, сломаю чего) :)
            button_dlinosherstnaya->hide();
            button_korotkosherstnaya->hide();
            button_menee50sm->hide();
            button_korotkiy->hide();
                     button_dlinniy->hide();
                     button_ushidlinnie->hide();
                    button_ushikorotkie->hide();
                     button_telodlinnoe->hide();
                     button_telokorotkoe->hide();
                      button_bolee50sm->hide();
                      button_vesbolee->hide();
                     button_vesmenee->hide();
                     restart_button->hide();


    buttonStart = new QPushButton(this);
    buttonClose = new QPushButton(this);

    buttonStart->setGeometry(155,90,100,40);
    buttonStart->setText("Начать");
    buttonStart->show();


    buttonClose->setGeometry(155,140,100,40);
    buttonClose->setText("Выход");
    buttonClose->show();





    connect(buttonClose,SIGNAL(clicked()),this,SLOT(button_close_clicked()));
    connect(buttonStart,SIGNAL(clicked()),this,SLOT(button_start_clicked()));
    connect(button_korotkosherstnaya,SIGNAL(clicked()),this,SLOT(button_korotkosherstnaya_clicked()));
    connect(button_bolee50sm,SIGNAL(clicked()),this,SLOT(button_bolee50sm_clicked()));
     connect(button_vesbolee,SIGNAL(clicked()),this,SLOT(button_vesbolee_clicked()));
     connect(button_vesmenee,SIGNAL(clicked()),this,SLOT(button_vesmenee_clicked()));

    connect(button_menee50sm,SIGNAL(clicked()),this,SLOT(button_menee50sm_clicked()));

    connect(button_korotkiy,SIGNAL(clicked()),this,SLOT(button_korotkiy_clicked()));

    connect(button_dlinniy,SIGNAL(clicked()),this,SLOT(button_dlinniy_clicked()));
    connect(button_ushidlinnie,SIGNAL(clicked()),this,SLOT(button_ushidlinnie_clicked()));
    connect(button_ushikorotkie,SIGNAL(clicked()),this,SLOT(button_ushikorotkie_clicked()));

    connect(button_telokorotkoe,SIGNAL(clicked()),this,SLOT(button_telokorotkoe_clicked()));
    connect(button_telodlinnoe,SIGNAL(clicked()),this,SLOT(button_telodlinnoe_clicked()));

    connect(restart_button,SIGNAL(clicked()),this,SLOT(button_rest_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::  button_close_clicked()
{
  MainWindow::close();

}

void MainWindow:: button_start_clicked()
{

    buttonClose->hide();
    buttonStart->hide();
    button_korotkosherstnaya->setGeometry(135,90,145,40);
    button_korotkosherstnaya->setText("Короткошерстная собака");
    button_korotkosherstnaya->show();
    button_dlinosherstnaya->setGeometry(135,140,145,40);
    button_dlinosherstnaya->setText("Длинношерстная собака");
    button_dlinosherstnaya->show();


}

void MainWindow:: button_korotkosherstnaya_clicked()
{
    button_korotkosherstnaya->hide();
    button_dlinosherstnaya->hide();

    button_menee50sm->setGeometry(155,90,100,40);
    button_menee50sm->setText("Рост 50 см");
    button_menee50sm->show();

    button_bolee50sm->setGeometry(155,140,100,40);
    button_bolee50sm->setText("Рост более 50 см");
    button_bolee50sm->show();

}
void MainWindow:: button_bolee50sm_clicked()
{
    button_bolee50sm->hide();
    button_menee50sm->hide();

    button_vesbolee->setGeometry(155,90,100,40);
    button_vesbolee->setText("Вес более 50 кг");
    button_vesbolee->show();

    button_vesmenee->setGeometry(155,140,100,40);
    button_vesmenee->setText("Вес менее 50 кг");
    button_vesmenee->show();

}
void MainWindow:: button_vesbolee_clicked()
{
QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Датский дог");
restart_button->setGeometry(155,190,100,40);
restart_button->setText("Начать заного");
restart_button->show();
}
void MainWindow:: button_vesmenee_clicked()
{
QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Фокскаунд");
restart_button->setGeometry(155,190,100,40);
restart_button->setText("Начать заного");
restart_button->show();
}

void MainWindow:: button_menee50sm_clicked()
{
    button_bolee50sm->hide();
    button_menee50sm->hide();

    button_korotkiy->setGeometry(155,140,100,40);
    button_korotkiy->setText("Короткий хвост");
    button_korotkiy->show();

    button_dlinniy->setGeometry(155,90,100,40);
    button_dlinniy->setText("Длинный хвост");
    button_dlinniy->show();

}

void MainWindow:: button_korotkiy_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Английский бульдог");
    restart_button->setGeometry(155,190,100,40);
    restart_button->setText("Начать заного");
    restart_button->show();
}

void MainWindow:: button_dlinniy_clicked()
{
    restart_button->hide();
     button_korotkiy->hide();
     button_dlinniy->hide();

     button_ushidlinnie->setGeometry(155,90,100,40);
     button_ushidlinnie->setText("Длинные уши");
     button_ushidlinnie->show();

     button_ushikorotkie->setGeometry(155,140,100,40);
     button_ushikorotkie->setText("Короткие уши");
     button_ushikorotkie->show();
}

void MainWindow:: button_ushidlinnie_clicked()
{

    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Гончая");
    restart_button->setGeometry(155,190,100,40);
    restart_button->setText("Начать заного");
    restart_button->show();

}

void MainWindow:: button_ushikorotkie_clicked()
{
    restart_button->hide();
    button_ushidlinnie->hide();
    button_ushikorotkie->hide();

    button_telodlinnoe->setGeometry(155,90,100,40);
    button_telodlinnoe->setText("Тело длинное");
    button_telodlinnoe->show();


            button_telokorotkoe->setGeometry(155,140,100,40);
            button_telokorotkoe->setText("Тело короткое");
            button_telokorotkoe->show();
}

void  MainWindow:: button_telokorotkoe_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Чихуахуа");
    restart_button->setGeometry(155,190,100,40);
    restart_button->setText("Начать заного");
    restart_button->show();
}
void  MainWindow:: button_telodlinnoe_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Мопс");
    restart_button->setGeometry(155,190,100,40);
    restart_button->setText("Начать заного");
    restart_button->show();
}







 void MainWindow:: button_rest_clicked()
{
     button_korotkosherstnaya->hide();
     button_menee50sm->hide();
     button_korotkiy->hide();
              button_dlinniy->hide();
              button_ushidlinnie->hide();
             button_ushikorotkie->hide();
              button_telodlinnoe->hide();
              button_telokorotkoe->hide();
               button_bolee50sm->hide();
               button_vesbolee->hide();
              button_vesmenee->hide();
              restart_button->hide();
              buttonStart->show();
               buttonClose->show();

}


 void MainWindow:: button_dlinosherstnaya_clicked()
 {



 }

 void MainWindow:: button_Dmenee50sm_clicked()
{


}

 void MainWindow:: button_DdobroTrue_clicked()
{


}


void MainWindow:: button_DdobroFalse_clicked()
{


}

 void MainWindow:: button_Dbolee50sm_clicked()
{


}
     void MainWindow:: button_Dmenee70sm_clicked()
{


}
void MainWindow:: button_Ddlinie_clicked()
{

}
void MainWindow:: button_Dkorotkie_clicked()
{

}
void MainWindow:: button_DOkrasrizhsotmFalse_clicked()
{


}
void MainWindow:: button_DbelFalse_clicked()
{

}
void MainWindow:: button_DbelTrue_clicked()
{

}
void MainWindow:: button_DOkrasrizhsotmTrue()
{

}



#include "mainwindow.h"
#include <QRect>
#include <QString>
#include <QStyle>
#include <ui_mainwindow.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//Кнопки, вопросы this
    question = new QLabel(this);
    //оформление вопроса
    question->setGeometry(85,50,400,40);




    restart_button = new QPushButton(this);
//Короткошерстная
button_korotkosherstnaya = new QPushButton(this);
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


//Длиношерстная собака
 button_dlinosherstnaya = new QPushButton(this);
    //Каков рост собаки: менее 50см или более
     button_Dmenee50sm = new QPushButton(this);
     button_Dbolee50sm = new QPushButton(this);
    //У собаки доброжелательный характер?
     button_Ddobraya = new QPushButton(this);
     button_Dnedobraya = new QPushButton(this);
    //У собаки рост менее 70 см или более
     button_Dmenee70sm = new QPushButton(this);
     button_Dbolee70sm = new QPushButton(this);
    //Длинные или короткие уши у собаки
     button_Ddlinnie = new QPushButton(this);
     button_Dkorotkie = new QPushButton(this);
    //Окрас рыжий с белыми отметинами
     button_DbelotmetiniFalse = new QPushButton(this);
     button_DbelotmetiniTrue = new QPushButton(this);
    //Белоснежный окрас
     button_DbelosnezhTrue = new QPushButton(this);
     button_DbelosnezhFalse = new QPushButton(this);

            //Скрываем кнопки, (лень лезть в библиотеку менять конструктор) :)
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
            button_dlinosherstnaya->hide();
            button_Dmenee50sm->hide();
            button_Dbolee50sm->hide();
            button_Ddobraya->hide();
            button_Dnedobraya->hide();
            button_Dmenee70sm->hide();
            button_Dbolee70sm->hide();
            button_Ddlinnie->hide();
            button_Dkorotkie->hide();
            button_DbelotmetiniFalse->hide();
            button_DbelotmetiniTrue->hide();
            button_DbelosnezhTrue->hide();
            button_DbelosnezhFalse->hide();
                restart_button->hide();


    buttonStart = new QPushButton(this);
    buttonClose = new QPushButton(this);

    buttonStart->setGeometry(155,90,100,40);
    buttonStart->setText("Начать");
    buttonStart->show();


    buttonClose->setGeometry(155,140,100,40);
    buttonClose->setText("Выход");
    buttonClose->show();

    restart_button->setText("Начать заного");




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

    connect(button_dlinosherstnaya,SIGNAL(clicked()),this,SLOT(button_dlinosherstnaya_clicked()));
    connect(button_Dmenee50sm,SIGNAL(clicked()),this,SLOT(button_Dmenee50sm_clicked()));
    connect(button_Ddobraya,SIGNAL(clicked()),this,SLOT(button_DdobroTrue_clicked()));
    connect(button_Dnedobraya,SIGNAL(clicked()),this,SLOT(button_DdobroFalse_clicked()));
    connect(button_Dbolee50sm,SIGNAL(clicked()),this,SLOT(button_Dbolee50sm_clicked()));
    connect(button_Ddlinnie,SIGNAL(clicked()),this,SLOT(button_Ddlinie_clicked()));
    connect(button_Dkorotkie,SIGNAL(clicked()),this,SLOT(button_Dkorotkie_clicked()));

    connect(button_Dmenee70sm,SIGNAL(clicked()),this,SLOT(button_Dmenee70sm_clicked()));
    connect(button_Dbolee70sm,SIGNAL(clicked()),this,SLOT(button_Dbolee70sm_clicked()));

    connect(button_DbelotmetiniFalse,SIGNAL(clicked()),this,SLOT(button_DOkrasbelosnezhn_clicked()));
    connect(button_DbelotmetiniTrue,SIGNAL(clicked()),this,SLOT(button_DOkrasrizhsotmTrue_clicked()));
    connect(button_DbelosnezhTrue,SIGNAL(clicked()),this,SLOT(button_DbelTrue_clicked()));
    connect(button_DbelosnezhFalse,SIGNAL(clicked()),this,SLOT(button_DbelFalse_clicked()));


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
    question->setText("Какая собака: длиношерстная или короткошерстная?");
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
    question->setText("Каков рост собаки: менее 50 см или более?");
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
    question->setText("Собака весит более 50кг или менее?");
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
restart_button->show();
}

void MainWindow:: button_menee50sm_clicked()
{
    button_bolee50sm->hide();
    button_menee50sm->hide();
    question->setText("У собаки длинный или короткий хвост?");
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
    restart_button->show();
}

void MainWindow:: button_dlinniy_clicked()
{
    restart_button->hide();
     button_korotkiy->hide();
     button_dlinniy->hide();
    question->setText("У собаки длинные или короткие уши?");
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
    restart_button->show();

}

void MainWindow:: button_ushikorotkie_clicked()
{
    restart_button->hide();
    button_ushidlinnie->hide();
    button_ushikorotkie->hide();
    question->setText("Тело собаки длинное или короткое?");

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
    restart_button->show();
}
void  MainWindow:: button_telodlinnoe_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Мопс");
    restart_button->setGeometry(155,190,100,40);
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
     button_dlinosherstnaya->hide();
     button_Dmenee50sm->hide();
     button_Dbolee50sm->hide();
     button_Ddobraya->hide();
     button_Dnedobraya->hide();
     button_Dmenee70sm->hide();
     button_Dbolee70sm->hide();
     button_Ddlinnie->hide();
     button_Dkorotkie->hide();
     button_DbelotmetiniFalse->hide();
     button_DbelotmetiniTrue->hide();
     button_DbelosnezhTrue->hide();
     button_DbelosnezhFalse->hide();
     restart_button->hide();
               buttonStart->show();
               buttonClose->show();

               question->setText(" ");

}


 void MainWindow:: button_dlinosherstnaya_clicked()
 {
     button_korotkosherstnaya->hide();
     button_dlinosherstnaya->hide();
     question->setText("Рост собаки менее или более 50 сантиметров?");
     button_Dmenee50sm->setGeometry(135,90,145,40);
     button_Dmenee50sm->setText("Менее 50см");
     button_Dmenee50sm->show();
     button_Dbolee50sm->setGeometry(135,140,145,40);
     button_Dbolee50sm->setText("Более 50см");
     button_Dbolee50sm->show();


 }

 void MainWindow:: button_Dmenee50sm_clicked()
{
     button_Dmenee50sm->hide();
     button_Dbolee50sm->hide();
     question->setText("У собаки доброжелательный характер?");
     button_Ddobraya->setGeometry(135,90,145,40);
     button_Ddobraya->setText("Доброжелательный"); //Добавить сигнал
     button_Ddobraya->show();
     button_Dnedobraya->setGeometry(135,140,145,40);
     button_Dnedobraya->setText("Недоброжелательный"); //Добавить сигнал
     button_Dnedobraya->show();



}

 void MainWindow:: button_DdobroTrue_clicked()
{
     QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Кокер-спаниэль");
     restart_button->setGeometry(155,190,100,40);
     restart_button->show();

}


void MainWindow:: button_DdobroFalse_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Ирландский сеттер");
    restart_button->setGeometry(155,190,100,40);
    restart_button->show();

}

 void MainWindow:: button_Dbolee50sm_clicked()
{
     button_Dmenee50sm->hide();
     button_Dbolee50sm->hide();
     question->setText("Рост собаки менее 70 сантиметров или более?");
     button_Dmenee70sm->setGeometry(135,90,145,40);
     button_Dmenee70sm->setText("Менее 70см"); //Добавить сигнал
     button_Dmenee70sm->show();
     button_Dbolee70sm->setGeometry(135,140,145,40);
     button_Dbolee70sm->setText("Более 70см"); //Добавить сигнал
     button_Dbolee70sm->show();

}
     void MainWindow:: button_Dmenee70sm_clicked()
{
         button_Dmenee70sm->hide();
         button_Dbolee70sm->hide();
         question->setText("Уши собаки длинные или короткие?");
         button_Ddlinnie->setGeometry(135,90,145,40);
         button_Ddlinnie->setText("Длинные"); //Добавить сигнал
         button_Ddlinnie->show();
         button_Dkorotkie->setGeometry(135,140,145,40);
         button_Dkorotkie->setText("Короткие"); //Добавить сигнал
         button_Dkorotkie->show();


}
void MainWindow:: button_Ddlinie_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Большой вандейский грифон");
    restart_button->setGeometry(155,190,100,40);
    restart_button->show();
}
void MainWindow:: button_Dkorotkie_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Колли");
    restart_button->setGeometry(155,190,100,40);
    restart_button->show();
}


void MainWindow:: button_Dbolee70sm_clicked()
{

    button_Dmenee70sm->hide();
    button_Dbolee70sm->hide();
    question->setText("У собаки окрас рыжий с белыми отметинами?");
    button_DbelotmetiniFalse->setGeometry(135,90,145,40);
    button_DbelotmetiniFalse->setText("Нет"); //Добавить сигнал
    button_DbelotmetiniFalse->show();
    button_DbelotmetiniTrue->setGeometry(135,140,145,40);
    button_DbelotmetiniTrue->setText("Да"); //Добавить сигнал
    button_DbelotmetiniTrue->show();
}


void MainWindow:: button_DOkrasbelosnezhn_clicked()
{
    button_DbelotmetiniFalse->hide();
    button_DbelotmetiniTrue->hide();
    question->setText("Собака имеет белоснежный окрас?");
    button_DbelosnezhTrue->setGeometry(135,90,145,40);
    button_DbelosnezhTrue->setText("Да"); //Добавить сигнал
    button_DbelosnezhTrue->show();
    button_DbelosnezhFalse->setGeometry(135,140,145,40);
    button_DbelosnezhFalse->setText("Нет"); //Добавить сигнал
    button_DbelosnezhFalse->show();

}

void MainWindow:: button_DbelFalse_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Ньюфаундленд");
    restart_button->setGeometry(155,190,100,40);
    restart_button->show();
}
void MainWindow:: button_DbelTrue_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Ирландский волкодав");
    restart_button->setGeometry(155,190,100,40);
    restart_button->show();
}
void MainWindow:: button_DOkrasrizhsotmTrue_clicked()
{
    QMessageBox::information(this,"Порода собаки определена", "Ваша собака - Сенбернар");
    restart_button->setGeometry(155,190,100,40);
    restart_button->show();
}



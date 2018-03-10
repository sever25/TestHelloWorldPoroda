#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:




    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void button_rest_clicked();
    void button_close_clicked();
    void button_start_clicked();
    void button_korotkosherstnaya_clicked();
    void button_bolee50sm_clicked();
    void button_menee50sm_clicked();
    void button_vesbolee_clicked();
    void button_vesmenee_clicked();
    void button_korotkiy_clicked();
    void button_dlinniy_clicked();
    void button_ushidlinnie_clicked();
    void button_ushikorotkie_clicked();
    void button_telokorotkoe_clicked();
    void button_telodlinnoe_clicked();


    void button_dlinosherstnaya_clicked();
        void button_Dmenee50sm_clicked();
        void button_DdobroTrue_clicked();
        void button_DdobroFalse_clicked();

    void button_Dbolee50sm_clicked();
        void button_Dmenee70sm_clicked();
            void button_Ddlinie_clicked();
            void button_Dkorotkie_clicked();
         void button_DOkrasrizhsotmFalse_clicked();
            void button_DbelFalse_clicked();
            void button_DbelTrue_clicked();
         void button_DOkrasrizhsotmTrue();




private:
    Ui::MainWindow *ui;
    QPushButton *buttonStart = new QPushButton();
    QPushButton *buttonClose = new QPushButton();

    //Обьявление кнопок

    //Короткошерстная собака
    QPushButton *button_korotkosherstnaya = new QPushButton();

        //Каков рост собаки
        QPushButton *button_menee50sm = new QPushButton();
        QPushButton *button_bolee50sm = new QPushButton();
        //У собаки короткий или длинный хвост
            QPushButton *button_korotkiy = new QPushButton(); //Английский бульдог
            QPushButton *button_dlinniy = new QPushButton();
            //Длинные или короткие уши у собаки
                QPushButton *button_ushidlinnie = new QPushButton(); //Гончая
                QPushButton *button_ushikorotkie = new QPushButton();
                //Тело длинное или короткое
                    QPushButton *button_telodlinnoe = new QPushButton(); //Мопс
                    QPushButton *button_telokorotkoe = new QPushButton(); //Чихуахуа
             //Собака весит более или менее 50кг
            QPushButton *button_vesbolee = new QPushButton();
            QPushButton *button_vesmenee = new QPushButton();


    //Длиношерстная собака
    QPushButton *button_dlinosherstnaya = new QPushButton();
        //Каков рост собаки: менее 50см или более
        QPushButton *button_Dmenee50sm = new QPushButton();
        QPushButton *button_Dbolee50sm = new QPushButton();
        //У собаки доброжелательный характер?
        QPushButton *button_Ddobraya = new QPushButton();
        QPushButton *button_Dnedobraya = new QPushButton();
        //У собаки рост менее 70 см или более
        QPushButton *button_Dmenee70sm = new QPushButton();
        QPushButton *button_Dbolee70sm = new QPushButton();
        //Длинные или короткие уши у собаки
        QPushButton *button_Ddlinnie = new QPushButton();
        QPushButton *button_Dkorotkie = new QPushButton();
        //Окрас рыжий с белыми отметинами
        QPushButton *button_DbelotmetiniFalse = new QPushButton();
        QPushButton *button_DbelotmetiniTrue = new QPushButton();
        //Белоснежный окрас
        QPushButton *button_DbelosnezhTrue = new QPushButton();
        QPushButton *button_DbelosnezhFalse = new QPushButton();



    //Рестарт
    QPushButton *restart_button = new QPushButton();



};

#endif // MAINWINDOW_H

#include "mainapp.h"
#include "ui_mainapp.h"

MainApp::MainApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainApp)
{
    ui->setupUi(this);

    ui->checkBox1->setStyleSheet("QCheckBox::indicator {width:50px;height: 50px;}"
                                  "QCheckBox::indicator:checked { image: url(:/images/Images/check.png); }"
                                  "QCheckBox::indicator:unchecked{ image: url(:/images/Images/uncheck.png); }");

}

MainApp::~MainApp()
{
    delete ui;
}

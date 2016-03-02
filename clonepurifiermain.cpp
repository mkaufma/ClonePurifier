#include "clonepurifiermain.h"
#include "ui_clonepurifiermain.h"

ClonePurifierMain::ClonePurifierMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClonePurifierMain)
{
    ui->setupUi(this);
}

ClonePurifierMain::~ClonePurifierMain()
{
    delete ui;
}

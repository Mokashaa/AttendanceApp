#include "resultdialog.h"
#include "ui_resultdialog.h"
#include<QTextStream>
#include<QPixmap>
ResultDialog::ResultDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResultDialog)
{
    ui->setupUi(this);
    QPixmap pic ("/home/okshh/AttendanceApp/result.jpg");
    ui->Image->setPixmap(pic.scaled(ui->Image->width(),ui->Image->height(),Qt::KeepAspectRatio));
    ui->Image->setAlignment(Qt::AlignCenter);
}

ResultDialog::~ResultDialog()
{
    delete ui;
}

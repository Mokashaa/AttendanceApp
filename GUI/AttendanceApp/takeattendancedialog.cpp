#include "takeattendancedialog.h"
#include "ui_takeattendancedialog.h"
#include <QFileDialog>
#include <QMessageBox>
#include<QPlainTextEdit>
#include <QProcess>
#include "resultdialog.h"
#include <QPixmap>
QString file_name;
QString tutorial = "Tutorial1";


TakeAttendanceDialog::TakeAttendanceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TakeAttendanceDialog)
{
    ui->setupUi(this);
}

TakeAttendanceDialog::~TakeAttendanceDialog()
{
    delete ui;
}



void TakeAttendanceDialog::on_group_image_button_clicked()
{
    file_name = QFileDialog::getOpenFileName(this , "Choose Group Image");
    QPixmap pic (file_name);
    ui->Image_path->setPixmap(pic.scaled(ui->Image_path->width(),ui->Image_path->height(),Qt::KeepAspectRatio));
    ui->Image_path->setAlignment(Qt::AlignCenter);
}



void TakeAttendanceDialog::on_Take_attendance_button_clicked()
{
    QString path = QCoreApplication::applicationDirPath();
    QString  command("python");
    QStringList params = QStringList() << "/home/okshh/AttendanceApp/attendance_script.py" << file_name << tutorial;
    QProcess *process = new QProcess();
    process->startDetached(command, params, path);
    process->waitForFinished();
    process->close();
    for (long i = 0; i<5000000000;i++);
    //for (long i = 0; i<10000000000;i++);
    this->close();
    ResultDialog resultDialog;
    resultDialog.setModal(true);
    resultDialog.exec();


}


void TakeAttendanceDialog::on_Tutorials_list_currentTextChanged(const QString &arg1)
{
    tutorial = arg1;
}

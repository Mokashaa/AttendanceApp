#include "addstudentdialog.h"
#include "ui_addstudentdialog.h"
#include <QFileDialog>
#include <QMessageBox>
#include<QPlainTextEdit>
#include <QProcess>
#include <qstringlist.h>
#include <QDebug>
#include <QPixmap>
QString img1;
QString img2;
QString img3;
QString id ;


AddStudentDialog::AddStudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStudentDialog)
{
    ui->setupUi(this);
    QFile file("/home/okshh/AttendanceApp/dofaasheet.csv");
    if (!file.open(QIODevice::ReadOnly)) {
    }

    QStringList wordList;
    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        wordList.append(line.split(',').first());
    }
    wordList.pop_front();
    ui->codesList->addItems(wordList);
}

AddStudentDialog::~AddStudentDialog()
{
    delete ui;
}

void AddStudentDialog::on_img1_button_clicked()
{
    img1 = QFileDialog::getOpenFileName(this , "Choose First Image");
    QPixmap pic1 (img1);
    ui->image1->setPixmap(pic1.scaled(ui->image1->width(),ui->image1->height(),Qt::KeepAspectRatio));
}

void AddStudentDialog::on_img2_button_clicked()
{
    img2 = QFileDialog::getOpenFileName(this , "Choose Second Image");
    QPixmap pic2 (img2);
    ui->image2->setPixmap(pic2.scaled(ui->image2->width(),ui->image2->height(),Qt::KeepAspectRatio));
}

void AddStudentDialog::on_img3_button_clicked()
{
    img3 = QFileDialog::getOpenFileName(this , "Choose Third Image");
    QPixmap pic3 (img3);
    ui->image3->setPixmap(pic3.scaled(ui->image3->width(),ui->image3->height(),Qt::KeepAspectRatio));
}


void AddStudentDialog::on_add_to_database_button_clicked()
{
    QString path = QCoreApplication::applicationDirPath();
    QString  command("python");
    QStringList params = QStringList() << "/home/okshh/AttendanceApp/add_student_script.py" << img1 << img2 << img3 << id ;
    QProcess *process = new QProcess();
    process->startDetached(command, params, path);
    process->waitForFinished(-1); // sets current thread to sleep and waits for pingProcess end
    process->close();
    for (int i = 0; i<100000000;i++);
    this->close();
    QMessageBox::information(this,"Info","Done adding to database");

}



void AddStudentDialog::on_codesList_currentTextChanged()
{
    id = ui->codesList->currentText();
}

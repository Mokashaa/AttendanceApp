#include "attendanceapp.h"
#include "ui_attendanceapp.h"
#include "addstudentdialog.h"
#include "takeattendancedialog.h"


AttendanceApp::AttendanceApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AttendanceApp)
{
    ui->setupUi(this);
}

AttendanceApp::~AttendanceApp()
{
    delete ui;
}

void AttendanceApp::on_Add_Student_button_clicked()
{
    AddStudentDialog addStudentDialog;
    addStudentDialog.setModal(true);
    addStudentDialog.exec();
}

void AttendanceApp::on_Take_attendance_button_clicked()
{
    TakeAttendanceDialog AttendanceDialoge;
    AttendanceDialoge.setModal(true);
    AttendanceDialoge.exec();
}

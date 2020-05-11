#ifndef ATTENDANCEAPP_H
#define ATTENDANCEAPP_H

#include <QMainWindow>

namespace Ui {
class AttendanceApp;
}

class AttendanceApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit AttendanceApp(QWidget *parent = 0);
    ~AttendanceApp();

private slots:
    void on_Add_Student_button_clicked();

    void on_Take_attendance_button_clicked();

private:
    Ui::AttendanceApp *ui;
};

#endif // ATTENDANCEAPP_H

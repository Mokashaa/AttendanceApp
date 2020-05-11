#ifndef TAKEATTENDANCEDIALOG_H
#define TAKEATTENDANCEDIALOG_H

#include <QDialog>

namespace Ui {
class TakeAttendanceDialog;
}

class TakeAttendanceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TakeAttendanceDialog(QWidget *parent = 0);
    ~TakeAttendanceDialog();

private slots:
    void on_Take_attendance_button_clicked();

    void on_group_image_button_clicked();

    void on_Tutorials_list_currentTextChanged(const QString &arg1);

private:
    Ui::TakeAttendanceDialog *ui;
};

#endif // TAKEATTENDANCEDIALOG_H

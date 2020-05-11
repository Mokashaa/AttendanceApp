#ifndef ADDSTUDENTDIALOG_H
#define ADDSTUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class AddStudentDialog;
}

class AddStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudentDialog(QWidget *parent = 0);
    ~AddStudentDialog();

private slots:
    void on_img1_button_clicked();

    void on_img2_button_clicked();

    void on_img3_button_clicked();

    void on_add_to_database_button_clicked();


    void on_codesList_currentTextChanged();

private:
    Ui::AddStudentDialog *ui;
};

#endif // ADDSTUDENTDIALOG_H

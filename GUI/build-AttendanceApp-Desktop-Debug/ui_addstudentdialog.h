/********************************************************************************
** Form generated from reading UI file 'addstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTDIALOG_H
#define UI_ADDSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddStudentDialog
{
public:
    QPushButton *img1_button;
    QPushButton *img2_button;
    QPushButton *img3_button;
    QPushButton *add_to_database_button;
    QLabel *path1;
    QLabel *path2;
    QLabel *path3;
    QLabel *label;
    QComboBox *codesList;
    QLabel *image1;
    QLabel *image2;
    QLabel *image3;

    void setupUi(QDialog *AddStudentDialog)
    {
        if (AddStudentDialog->objectName().isEmpty())
            AddStudentDialog->setObjectName(QStringLiteral("AddStudentDialog"));
        AddStudentDialog->resize(763, 492);
        img1_button = new QPushButton(AddStudentDialog);
        img1_button->setObjectName(QStringLiteral("img1_button"));
        img1_button->setGeometry(QRect(100, 100, 89, 25));
        img2_button = new QPushButton(AddStudentDialog);
        img2_button->setObjectName(QStringLiteral("img2_button"));
        img2_button->setGeometry(QRect(340, 100, 89, 25));
        img3_button = new QPushButton(AddStudentDialog);
        img3_button->setObjectName(QStringLiteral("img3_button"));
        img3_button->setGeometry(QRect(580, 100, 89, 25));
        add_to_database_button = new QPushButton(AddStudentDialog);
        add_to_database_button->setObjectName(QStringLiteral("add_to_database_button"));
        add_to_database_button->setGeometry(QRect(300, 390, 171, 41));
        path1 = new QLabel(AddStudentDialog);
        path1->setObjectName(QStringLiteral("path1"));
        path1->setGeometry(QRect(100, 80, 91, 21));
        path2 = new QLabel(AddStudentDialog);
        path2->setObjectName(QStringLiteral("path2"));
        path2->setGeometry(QRect(340, 80, 101, 21));
        path3 = new QLabel(AddStudentDialog);
        path3->setObjectName(QStringLiteral("path3"));
        path3->setGeometry(QRect(580, 80, 91, 21));
        label = new QLabel(AddStudentDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(333, 10, 101, 20));
        codesList = new QComboBox(AddStudentDialog);
        codesList->setObjectName(QStringLiteral("codesList"));
        codesList->setGeometry(QRect(330, 30, 111, 31));
        image1 = new QLabel(AddStudentDialog);
        image1->setObjectName(QStringLiteral("image1"));
        image1->setGeometry(QRect(70, 156, 151, 151));
        image2 = new QLabel(AddStudentDialog);
        image2->setObjectName(QStringLiteral("image2"));
        image2->setGeometry(QRect(310, 160, 151, 151));
        image3 = new QLabel(AddStudentDialog);
        image3->setObjectName(QStringLiteral("image3"));
        image3->setGeometry(QRect(550, 160, 151, 151));

        retranslateUi(AddStudentDialog);

        QMetaObject::connectSlotsByName(AddStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStudentDialog)
    {
        AddStudentDialog->setWindowTitle(QApplication::translate("AddStudentDialog", "Add student", Q_NULLPTR));
        img1_button->setText(QApplication::translate("AddStudentDialog", "Browse", Q_NULLPTR));
        img2_button->setText(QApplication::translate("AddStudentDialog", "Browse", Q_NULLPTR));
        img3_button->setText(QApplication::translate("AddStudentDialog", "Browse", Q_NULLPTR));
        add_to_database_button->setText(QApplication::translate("AddStudentDialog", "Add To Database", Q_NULLPTR));
        path1->setText(QApplication::translate("AddStudentDialog", "First image:", Q_NULLPTR));
        path2->setText(QApplication::translate("AddStudentDialog", "Second image:", Q_NULLPTR));
        path3->setText(QApplication::translate("AddStudentDialog", "Third image:", Q_NULLPTR));
        label->setText(QApplication::translate("AddStudentDialog", "Student Code:", Q_NULLPTR));
        image1->setText(QString());
        image2->setText(QString());
        image3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddStudentDialog: public Ui_AddStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTDIALOG_H

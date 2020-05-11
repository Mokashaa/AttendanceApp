/********************************************************************************
** Form generated from reading UI file 'takeattendancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKEATTENDANCEDIALOG_H
#define UI_TAKEATTENDANCEDIALOG_H

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

class Ui_TakeAttendanceDialog
{
public:
    QLabel *Image_path;
    QPushButton *group_image_button;
    QPushButton *Take_attendance_button;
    QComboBox *Tutorials_list;

    void setupUi(QDialog *TakeAttendanceDialog)
    {
        if (TakeAttendanceDialog->objectName().isEmpty())
            TakeAttendanceDialog->setObjectName(QStringLiteral("TakeAttendanceDialog"));
        TakeAttendanceDialog->resize(871, 484);
        Image_path = new QLabel(TakeAttendanceDialog);
        Image_path->setObjectName(QStringLiteral("Image_path"));
        Image_path->setGeometry(QRect(50, 84, 771, 311));
        group_image_button = new QPushButton(TakeAttendanceDialog);
        group_image_button->setObjectName(QStringLiteral("group_image_button"));
        group_image_button->setGeometry(QRect(430, 30, 121, 31));
        Take_attendance_button = new QPushButton(TakeAttendanceDialog);
        Take_attendance_button->setObjectName(QStringLiteral("Take_attendance_button"));
        Take_attendance_button->setGeometry(QRect(350, 410, 161, 41));
        Tutorials_list = new QComboBox(TakeAttendanceDialog);
        Tutorials_list->setObjectName(QStringLiteral("Tutorials_list"));
        Tutorials_list->setGeometry(QRect(330, 30, 91, 31));
        Tutorials_list->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(TakeAttendanceDialog);

        QMetaObject::connectSlotsByName(TakeAttendanceDialog);
    } // setupUi

    void retranslateUi(QDialog *TakeAttendanceDialog)
    {
        TakeAttendanceDialog->setWindowTitle(QApplication::translate("TakeAttendanceDialog", "Take attendance", Q_NULLPTR));
        Image_path->setText(QString());
        group_image_button->setText(QApplication::translate("TakeAttendanceDialog", "Browse image..", Q_NULLPTR));
        Take_attendance_button->setText(QApplication::translate("TakeAttendanceDialog", "Take Attendance", Q_NULLPTR));
        Tutorials_list->clear();
        Tutorials_list->insertItems(0, QStringList()
         << QApplication::translate("TakeAttendanceDialog", "Tutorial1", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial2", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial3", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial4", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial5", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial6", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial7", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial8", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial9", Q_NULLPTR)
         << QApplication::translate("TakeAttendanceDialog", "Tutorial10", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class TakeAttendanceDialog: public Ui_TakeAttendanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKEATTENDANCEDIALOG_H

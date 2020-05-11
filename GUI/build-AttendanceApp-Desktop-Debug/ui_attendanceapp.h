/********************************************************************************
** Form generated from reading UI file 'attendanceapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEAPP_H
#define UI_ATTENDANCEAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttendanceApp
{
public:
    QWidget *centralWidget;
    QPushButton *Take_attendance_button;
    QPushButton *Add_Student_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AttendanceApp)
    {
        if (AttendanceApp->objectName().isEmpty())
            AttendanceApp->setObjectName(QStringLiteral("AttendanceApp"));
        AttendanceApp->resize(564, 417);
        centralWidget = new QWidget(AttendanceApp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Take_attendance_button = new QPushButton(centralWidget);
        Take_attendance_button->setObjectName(QStringLiteral("Take_attendance_button"));
        Take_attendance_button->setGeometry(QRect(180, 73, 181, 51));
        Add_Student_button = new QPushButton(centralWidget);
        Add_Student_button->setObjectName(QStringLiteral("Add_Student_button"));
        Add_Student_button->setGeometry(QRect(180, 180, 181, 51));
        AttendanceApp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AttendanceApp);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 564, 22));
        AttendanceApp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AttendanceApp);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AttendanceApp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AttendanceApp);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AttendanceApp->setStatusBar(statusBar);

        retranslateUi(AttendanceApp);

        QMetaObject::connectSlotsByName(AttendanceApp);
    } // setupUi

    void retranslateUi(QMainWindow *AttendanceApp)
    {
        AttendanceApp->setWindowTitle(QApplication::translate("AttendanceApp", "AttendanceApp", Q_NULLPTR));
        Take_attendance_button->setText(QApplication::translate("AttendanceApp", "Take Attendance", Q_NULLPTR));
        Add_Student_button->setText(QApplication::translate("AttendanceApp", "Add Student", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AttendanceApp: public Ui_AttendanceApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEAPP_H

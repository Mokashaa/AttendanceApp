/********************************************************************************
** Form generated from reading UI file 'resultdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTDIALOG_H
#define UI_RESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ResultDialog
{
public:
    QLabel *label;
    QLabel *Image;
    QLabel *label_2;

    void setupUi(QDialog *ResultDialog)
    {
        if (ResultDialog->objectName().isEmpty())
            ResultDialog->setObjectName(QStringLiteral("ResultDialog"));
        ResultDialog->resize(795, 436);
        label = new QLabel(ResultDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(22, 16, 161, 21));
        Image = new QLabel(ResultDialog);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(27, 40, 741, 331));
        label_2 = new QLabel(ResultDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 380, 641, 31));

        retranslateUi(ResultDialog);

        QMetaObject::connectSlotsByName(ResultDialog);
    } // setupUi

    void retranslateUi(QDialog *ResultDialog)
    {
        ResultDialog->setWindowTitle(QApplication::translate("ResultDialog", "Results", Q_NULLPTR));
        label->setText(QApplication::translate("ResultDialog", "Attended Students:", Q_NULLPTR));
        Image->setText(QString());
        label_2->setText(QApplication::translate("ResultDialog", "*Note: N/A for people not in the database", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResultDialog: public Ui_ResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTDIALOG_H

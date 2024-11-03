/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QCheckBox *checkbox;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName("Task");
        Task->resize(400, 300);
        checkbox = new QCheckBox(Task);
        checkbox->setObjectName("checkbox");
        checkbox->setGeometry(QRect(20, 120, 91, 24));
        editButton = new QPushButton(Task);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(170, 120, 93, 29));
        removeButton = new QPushButton(Task);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(280, 120, 93, 29));

        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Form", nullptr));
        checkbox->setText(QCoreApplication::translate("Task", "CheckBox", nullptr));
        editButton->setText(QCoreApplication::translate("Task", "Edit", nullptr));
        removeButton->setText(QCoreApplication::translate("Task", "Quitar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H

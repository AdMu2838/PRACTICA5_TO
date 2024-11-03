#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include <QDebug>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    mTasks()
{
    ui->setupUi(this);
    connect(ui->addTaskButton, &QPushButton::clicked, this,
            &MainWindow::addTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask(){
    bool ok;

    QString name = QInputDialog::getText(this,
                                         tr("Agregar pais"),
                                         tr("Nombre del pais"),
                                         QLineEdit::Normal,
                                         tr("Pais sin nombre"), &ok);

    if (ok && !name.isEmpty()){
        qDebug() << "Adding a new task";
        Task* task = new Task(name);
        mTasks.append(task);
        ui->verticalLayout->addWidget(task);
    }

}

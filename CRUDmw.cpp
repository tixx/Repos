#include "CRUDmw.h"
#include "ui_CRUDmw.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase baseConnector = dbConnect();

}


MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::dbConnect()
{
    QSqlDatabase baseConnector = QSqlDatabase::addDatabase("QSQLITE");
    baseConnector.setDatabaseName("TSProject);
    if(baseConnector.open()) {
        qDebug()<<"Connected to database";
    } else {
        QMessageBox msg;
        msg.setText("Не удалось подсоединится к базе данных.");
        msg.show();
        qDebug()<<"Not connected to database";
    }
    return baseConnector;
}




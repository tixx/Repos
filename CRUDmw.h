#ifndef CRUDMW_H
#define CRUDMW_H

#include <QtCore>
#include <QtGui>
#include <QtSql>
#include <QDebug>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QSqlDatabase dbConnect();
    QSqlTableModel *patient, *exam;
protected slots:
    on_searchButton_clicked();
    on_moreButton_clicked();
    on_newExamButtjn_clicked();
    on_printButton_clicked();
    on_viewButton_clicked();
    on_deleteButton_clicked();
    on_editButton_clicked();
    on_StringFT_picked();
    on_StringST_picked();
};

#endif // CRUDMW_H

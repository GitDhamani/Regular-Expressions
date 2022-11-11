#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QRegExpValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->hide();
    ui->menubar->hide();
    setFixedSize(200, 100);
    setWindowTitle("RegExp");

    QLineEdit* edit = new QLineEdit(this);
    edit->move((width()-edit->width())/2, (height()-edit->height())/2);
    edit->setFont(QFont("Arial", 12));

    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    edit->setValidator(new QRegExpValidator(regExp, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


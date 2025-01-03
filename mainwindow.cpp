#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tools_widget->setVisible(false);

    QStringList protocols = (QStringList() << "HTTP" << "SOCKS5" << "HTTPS");
    ui->choose_proto->addItems(protocols);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::del_start_interface(){
    ui->conn_bth->setVisible(false);
    ui->connet_lbl->setVisible(false);
}
void MainWindow::on_tools_bth_clicked()
{
    del_start_interface();
    ui->tools_widget->setVisible(true);



}


void MainWindow::on_settings_bth_clicked()
{
    del_start_interface();
}


void MainWindow::on_home_bth_clicked()
{
    ui->conn_bth->setVisible(true);
    ui->connet_lbl->setVisible(true);
    ui->tools_widget->setVisible(false);
}


void MainWindow::on_notif_bth_clicked()
{
    del_start_interface();
}


void MainWindow::on_test_bth_clicked()
{
    del_start_interface();
}


void MainWindow::on_conn_bth_clicked()
{
    del_start_interface();
}




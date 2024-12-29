#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tools_bth_clicked();

    void on_settings_bth_clicked();

    void on_home_bth_clicked();

    void on_notif_bth_clicked();

    void on_test_bth_clicked();

    void on_conn_bth_clicked();

private:
    Ui::MainWindow *ui;
    void del_start_interface();

};
#endif // MAINWINDOW_H

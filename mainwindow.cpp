#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    setWindowState(Qt::WindowMaximized);
//    setWindowFlags(this->windowFlags() &~ (Qt::WindowMinMaxButtonsHint  ));
    QObject::connect(ui->playMusicButton,SIGNAL(clicked(bool)),this,SLOT(showPlayMusicWindow()));


}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
 �����Ƕ���򿪴��ڵĺ���
*/
void MainWindow::showPlayMusicWindow(){

    playMusicWindow=new PlayMusicWindow;
    playMusicWindow->show();
}  //����
void MainWindow::showMonitorWindow(){}  //�򿪼�����Ĵ���
void MainWindow::showSwitcherWindow(){}  //�򿪿��ؿ��ƵĴ���
void MainWindow::showSystemStateWindow(){}  //��ϵͳ���õĴ���
void MainWindow::showOpenDoorWindow(){}  //�򿪿��ŵĴ���
void MainWindow::showSettingWindow(){}  //�����õĴ���
/*
 �����Ƕ���򿪴��ں�����Ķ���
*/
void MainWindow::playMusic (){}
void MainWindow::openDoor (){}

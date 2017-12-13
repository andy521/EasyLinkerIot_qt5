#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playmusicwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    PlayMusicWindow * playMusicWindow;



private:
    Ui::MainWindow *ui;

public slots:
    /*
     * ���
     * ���
     * ����
     * ϵͳ״̬
     * ����
     * ����
      */

    /*
     �����Ƕ���򿪴��ڵĺ���
    */
    void showPlayMusicWindow();//����
    void showMonitorWindow();//�򿪼�����Ĵ���
    void showSwitcherWindow();//�򿪿��ؿ��ƵĴ���
    void showSystemStateWindow();//��ϵͳ���õĴ���
    void showOpenDoorWindow();//�򿪿��ŵĴ���
    void showSettingWindow();//�����õĴ���
    /*
     �����Ƕ���򿪴��ں�����Ķ���
    */
    void playMusic ();
    void openDoor ();




};

#endif // MAINWINDOW_H

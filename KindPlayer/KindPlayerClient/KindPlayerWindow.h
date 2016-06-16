#ifndef KINDPLAYERWINDOW_H
#define KINDPLAYERWINDOW_H

#include <QMainWindow>
namespace Ui {class KindPlayerWindow;};

class KindPlayerWindow : public QMainWindow
{
	Q_OBJECT

public:
	KindPlayerWindow(QWidget *parent = 0);
	~KindPlayerWindow();

private:
	Ui::KindPlayerWindow *ui;
};

#endif // KINDPLAYERWINDOW_H

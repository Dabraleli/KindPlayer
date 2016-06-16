#include "KindPlayerWindow.h"
#include "ui_KindPlayerWindow.h"

KindPlayerWindow::KindPlayerWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::KindPlayerWindow();
	ui->setupUi(this);
}

KindPlayerWindow::~KindPlayerWindow()
{
	delete ui;
}


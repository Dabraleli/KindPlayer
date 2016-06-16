#include "KindPlayerWindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	KindPlayerWindow w;
	QFile styleFile(":qdarkstyle/style.qss");
	if (!styleFile.exists()){
		qDebug() << "Unable to set stylesheet, file not found";
	} else {
		styleFile.open(QFile::ReadOnly | QFile::Text);
		QTextStream styleStream(&styleFile);
		qApp->setStyleSheet(styleStream.readAll());
	}
	w.show();
	return a.exec();
}

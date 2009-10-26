#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>

class QTextEdit;
class QPushButton;
class QBuffer;
class ProtocolItem;

class Widget : public QMainWindow {
	Q_OBJECT
private:
	QTextEdit *edit1;
	QPushButton *start;
	QBuffer *buffer;
	QXmlStreamReader xmlReader;
	QXmlStreamWriter xmlWriter;
	
	ProtocolItem *currentItem;
	bool readCurrentCommand();
	void parseBuffer();
	void parseXml();
private slots:
	void startClicked();
	void updateEdit();
public:
	Widget();
};

#endif
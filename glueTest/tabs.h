#ifndef TABDIALOG_H
#define TABDIALOG_H

#include <QMainWindow>
#include <QtWidgets>
#include <QSerialPort>
#include <QDialog>

#include "tabs.h"

QT_BEGIN_NAMESPACE

class QLabel;
class QDialogButtonBox;
class QFileInfo;
class QTabWidget;

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class Console;
class SettingsDialog;

class InterfaceTab : public QWidget
{
    Q_OBJECT
public:
    explicit InterfaceTab(const QFileInfo &fileInfo, QWidget *parent = nullptr);
    ~InterfaceTab();

private slots:

private:

private:

};


/* SERIAL TAB */
class SerialTab : public QWidget
{
    Q_OBJECT

public:
    explicit SerialTab(const QFileInfo &fileInfo, QWidget *parent = 0);
    explicit SerialTab(const QFileInfo &fileInfo,  Console *console, QWidget *parent = 0);
    ~SerialTab();

private:
    Console *m_console = nullptr;
};


/* LOGGER TAB */
class LoggerTab : public QWidget
{
    Q_OBJECT

public:
    explicit LoggerTab(const QFileInfo &fileInfo, QWidget *parent = 0);
};
#endif // TABDIALOG_H

#include "tabs.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "console.h"
#include "settingsdialog.h"

#include <QLabel>
#include <QMessageBox>

InterfaceTab::InterfaceTab(const QFileInfo &fileInfo, QWidget *parent)
    : QWidget(parent)
{

}

InterfaceTab::~InterfaceTab()
{

}

SerialTab::SerialTab(const QFileInfo &fileInfo, Console *console, QWidget *parent)
    : QWidget(parent)
{
    m_console = console;
    //setCentralWidget( console );
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(m_console);
    setLayout(mainLayout);
}

SerialTab::~SerialTab()
{

}

LoggerTab::LoggerTab(const QFileInfo &fileInfo, QWidget *parent)
    : QWidget(parent)
{

}



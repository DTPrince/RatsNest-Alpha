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

LoggerTab::LoggerTab(const QFileInfo &fileInfo, QPlainTextEdit *textEdit, QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(textEdit);
    setLayout(mainLayout);

}

void LoggerTab::createActions()
{
//    QVBoxLayout *mainLayout = new QVBoxLayout;
//    QMenu *fileMenu = new QMenu(tr("&File"));
//    mainLayout->addWidget(fileMenu);
//    QToolBar *fileToolBar =  new QToolBar(tr("File"));
//    mainLayout->addWidget(fileToolBar);
//    const QIcon newIcon = QIcon::fromTheme("document-new", QIcon(":/images/new.png"));
//    QAction *newAct = new QAction(newIcon, tr("&New"), this);
//    newAct->setShortcuts(QKeySequence::New);
//    newAct->setStatusTip(tr("Create a new file"));
////    //connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
//    fileMenu->addAction(newAct);
//    fileToolBar->addAction(newAct);

//    const QIcon openIcon = QIcon::fromTheme("document-open", QIcon(":/images/open.png"));
//    QAction *openAct = new QAction(openIcon, tr("&Open..."), this);
//    openAct->setShortcuts(QKeySequence::Open);
//    openAct->setStatusTip(tr("Open an existing file"));
//    //connect(openAct, &QAction::triggered, this, &MainWindow::open);
//    fileMenu->addAction(openAct);
//    fileToolBar->addAction(openAct);


//    const QIcon saveIcon = QIcon::fromTheme("document-save", QIcon(":/images/save.png"));
//    QAction *saveAct = new QAction(saveIcon, tr("&Save"), this);
//    saveAct->setShortcuts(QKeySequence::Save);
//    saveAct->setStatusTip(tr("Save the document to disk"));
//    //connect(saveAct, &QAction::triggered, this, &MainWindow::save);
//    fileMenu->addAction(saveAct);
//    fileToolBar->addAction(saveAct);

//    const QIcon saveAsIcon = QIcon::fromTheme("document-save-as");
//    //QAction *saveAsAct = fileMenu->addAction(saveAsIcon, tr("Save &As..."), this, &MainWindow::saveAs);
//    //saveAsAct->setShortcuts(QKeySequence::SaveAs);
//    //saveAsAct->setStatusTip(tr("Save the document under a new name"));


//    fileMenu->addSeparator();

//    const QIcon exitIcon = QIcon::fromTheme("application-exit");
//    QAction *exitAct = fileMenu->addAction(exitIcon, tr("E&xit"), this, &QWidget::close);
//    exitAct->setShortcuts(QKeySequence::Quit);

//    exitAct->setStatusTip(tr("Exit the application"));

//    QMenu *editMenu = new QMenu(tr("&Edit"));
//    mainLayout->addWidget(editMenu);
//    QToolBar *editToolBar = new QToolBar(tr("Edit"));
//    mainLayout->addWidget(editToolBar);

#ifndef QT_NO_CLIPBOARD
//    const QIcon cutIcon = QIcon::fromTheme("edit-cut", QIcon(":/images/cut.png"));
//    QAction *cutAct = new QAction(cutIcon, tr("Cu&t"), this);
//    cutAct->setShortcuts(QKeySequence::Cut);
//    cutAct->setStatusTip(tr("Cut the current selection's contents to the "
//                            "clipboard"));
//    connect(cutAct, &QAction::triggered, textEdit, &QPlainTextEdit::cut);
//    editMenu->addAction(cutAct);
//    editToolBar->addAction(cutAct);

//    const QIcon copyIcon = QIcon::fromTheme("edit-copy", QIcon(":/images/copy.png"));
//    QAction *copyAct = new QAction(copyIcon, tr("&Copy"), this);
//    copyAct->setShortcuts(QKeySequence::Copy);
//    copyAct->setStatusTip(tr("Copy the current selection's contents to the "
//                             "clipboard"));
//    //connect(copyAct, &QAction::triggered, textEdit, &QPlainTextEdit::copy);
//    editMenu->addAction(copyAct);
//    editToolBar->addAction(copyAct);

//    const QIcon pasteIcon = QIcon::fromTheme("edit-paste", QIcon(":/images/paste.png"));
//    QAction *pasteAct = new QAction(pasteIcon, tr("&Paste"), this);
//    pasteAct->setShortcuts(QKeySequence::Paste);
//    pasteAct->setStatusTip(tr("Paste the clipboard's contents into the current "
//                              "selection"));
//    //connect(pasteAct, &QAction::triggered, textEdit, &QPlainTextEdit::paste);
//    editMenu->addAction(pasteAct);
//    editToolBar->addAction(pasteAct);

//    menuBar()->addSeparator();

#endif // !QT_NO_CLIPBOARD

//    QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
//    QAction *aboutAct = helpMenu->addAction(tr("&About"), this, &MainWindow::about);
//    aboutAct->setStatusTip(tr("Show the application's About box"));

//    QAction *aboutQtAct = helpMenu->addAction(tr("About &Qt"), qApp, &QApplication::aboutQt);
//    aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));



//#ifndef QT_NO_CLIPBOARD
//    cutAct->setEnabled(false);

//    copyAct->setEnabled(false);
//    connect(textEdit, &QPlainTextEdit::copyAvailable, cutAct, &QAction::setEnabled);
//    connect(textEdit, &QPlainTextEdit::copyAvailable, copyAct, &QAction::setEnabled);
//#endif // !QT_NO_CLIPBOARD
//    setLayout(mainLayout);
}

void LoggerTab::createStatusBar()
{
//    statusBar()->showMessage(tr("Ready"));
}



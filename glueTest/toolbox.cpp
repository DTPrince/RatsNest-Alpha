#include "toolbox.h"
#include "ui_toolbox.h"

ToolBox::ToolBox(QWidget *parent) :
    QToolBox(parent),
    ui(new Ui::ToolBox)
{
    ui->setupUi(this);
}

ToolBox::~ToolBox()
{
    delete ui;
}

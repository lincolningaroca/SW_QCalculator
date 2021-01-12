#include "dlgacercade.h"
#include "ui_dlgacercade.h"

DlgAcercaDe::DlgAcercaDe(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DlgAcercaDe)
{
  ui->setupUi(this);
  setWindowFlags(Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint);
}

DlgAcercaDe::~DlgAcercaDe()
{
  delete ui;
}

void DlgAcercaDe::on_pushButton_clicked()
{
    accept();
}

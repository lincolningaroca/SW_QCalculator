#ifndef DLGACERCADE_H
#define DLGACERCADE_H

#include <QDialog>

namespace Ui {
  class DlgAcercaDe;
}

class DlgAcercaDe : public QDialog
{
  Q_OBJECT

public:
  explicit DlgAcercaDe(QWidget *parent = nullptr);
  ~DlgAcercaDe();

private slots:
  void on_pushButton_clicked();

private:
  Ui::DlgAcercaDe *ui;
};

#endif // DLGACERCADE_H

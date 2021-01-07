#include "mainclass.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  a.setApplicationName("SW_QCalulator");
//  a.setApplicationDisplayName();
  a.setApplicationVersion("0.1");
  a.setOrganizationName("SWSystem's");

  a.setStyle(QStyleFactory::create("Fusion"));
  MainClass w;
  w.setWindowTitle(qApp->applicationName().append(" ¡BETA!"));
  w.show();
  return a.exec();
}

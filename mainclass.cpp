#include "mainclass.h"
#include "ui_mainclass.h"

MainClass::MainClass(QWidget *parent) :
  QWidget(parent), ui(new Ui::MainClass)
{
  ui->setupUi(this);
  setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
  setUpSpinBox();
  setUpSpinBoxF();
}

MainClass::~MainClass()
{
  delete ui;
}
/******configuraciones iniciales para los doubleSpinBox*****/

void MainClass::setUpSpinBox()
{
  /************************Velocity spin box*******************************/
  //set decimal
  //  ui->dspVelocidad1->setDecimals(3);

  //set the minimum values
  ui->dspVelocidad2->setFocus();
  ui->dspVelocidad1->setMinimum(0);
  ui->dspVelocidad1->setMinimum(0);
  ui->dspVelocidad1->setMinimum(0);
  //set the maximum values.
  ui->dspVelocidad1->setMaximum(std::numeric_limits<double>::max());
  ui->dspVelocidad2->setMaximum(std::numeric_limits<double>::max());
  ui->dspVelocidad3->setMaximum(std::numeric_limits<double>::max());
  //average spinbox
  ui->dsbPromedio->setMaximum(std::numeric_limits<double>::max());
  //set readonly the dsbPromedio
  ui->dsbPromedio->setReadOnly(true);

  /************************Time spin box*******************************/
  //set the minimum values
  ui->dspTiempo1->setMinimum(0);
  ui->dspTiempo2->setMinimum(0);
  ui->dspTiempo3->setMinimum(0);
  //set the maximum values.
  ui->dspTiempo1->setMaximum(std::numeric_limits<double>::max());
  ui->dspTiempo2->setMaximum(std::numeric_limits<double>::max());
  ui->dspTiempo3->setMaximum(std::numeric_limits<double>::max());
  //average spinbox
  ui->dspTiempoPromedio->setMaximum(std::numeric_limits<double>::max());
  //set readonly the dsbPromedio
  ui->dspTiempoPromedio->setReadOnly(true);
  /**************set minimum and maximun values for final caudala**************/

  /*****do read only****/
  ui->qLitrosSeg->setReadOnly(true);
  ui->qMetrosCubSeg->setReadOnly(true);
  ui->qMetrosCubDia->setReadOnly(true);
  ui->qLitrosSeg->setMaximum(std::numeric_limits<double>::max());
  ui->qLitrosSeg->setDecimals(3);
  ui->qMetrosCubDia->setMaximum(std::numeric_limits<double>::max());
  ui->qMetrosCubSeg->setMaximum(std::numeric_limits<double>::max());
  ui->qMetrosCubSeg->setDecimals(4);
  /***********no focus policy************************/
  ui->dsbPromedio->setFocusPolicy(Qt::NoFocus);
  ui->dspTiempoPromedio->setFocusPolicy(Qt::NoFocus);
  ui->qLitrosSeg->setFocusPolicy(Qt::NoFocus);
  ui->qMetrosCubDia->setFocusPolicy(Qt::NoFocus);
  ui->qMetrosCubSeg->setFocusPolicy(Qt::NoFocus);

  /***********agregando sufijos. litros***********/
  ui->dspVelocidad1->setSuffix(" Lts.");
  ui->dspVelocidad2->setSuffix(" Lts.");
  ui->dspVelocidad3->setSuffix(" Lts.");
  ui->dsbPromedio->setSuffix(" Lts.");
  /***********agregando sufijos. segundos ***********/

  ui->dspTiempo1->setSuffix(" Seg.");
  ui->dspTiempo2->setSuffix(" Seg.");
  ui->dspTiempo3->setSuffix(" Seg.");
  ui->dspTiempoPromedio->setSuffix(" Seg.");
  /***************sufijo para los caudales*************/

  ui->qLitrosSeg->setSuffix(" Lts/seg.");
  ui->qMetrosCubDia->setSuffix(" m3/día.");
  ui->qMetrosCubSeg->setSuffix(" m3/seg.");

  ui->dspVelocidad1->setFocus(Qt::OtherFocusReason);
  ui->dspVelocidad1->selectAll();

  //resultados de caudales


}
//void MainClass::loadWindow()
//{
//  setWindowFlags(Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint);
//  ui->statusbar->showMessage("Powered by. Lincoln Ingaroca  SWSystem's");

//}

/**********limpiar los controles***************/



void MainClass::setUpSpinBoxF()
{
  ui->dsbLongitud2->setReadOnly(true);
  ui->dsbLongitud2->setFocusPolicy(Qt::NoFocus);
  ui->dsbV1->setReadOnly(true);
  ui->dsbV1->setFocusPolicy(Qt::NoFocus);
  ui->dsbV2->setReadOnly(true);
  ui->dsbV2->setFocusPolicy(Qt::NoFocus);
  ui->dsbV3->setReadOnly(true);
  ui->dsbV3->setFocusPolicy(Qt::NoFocus);
  ui->dsb_a1s->setReadOnly(true);
  ui->dsb_a1s->setFocusPolicy(Qt::NoFocus);
  ui->dsbA1->setReadOnly(true);
  ui->dsbA1->setFocusPolicy(Qt::NoFocus);
  ui->dsbA2->setReadOnly(true);
  ui->dsbA2->setFocusPolicy(Qt::NoFocus);
  ui->dsbA3->setReadOnly(true);
  ui->dsbA3->setFocusPolicy(Qt::NoFocus);

  ui->dsb_A1->setReadOnly(true);
  ui->dsb_A1->setFocusPolicy(Qt::NoFocus);
  ui->dsb_A2->setReadOnly(true);
  ui->dsb_A2->setFocusPolicy(Qt::NoFocus);
  ui->dsb_A3->setReadOnly(true);
  ui->dsb_A3->setFocusPolicy(Qt::NoFocus);


  ui->dsb_V1->setReadOnly(true);
  ui->dsb_V1->setFocusPolicy(Qt::NoFocus);
  ui->dsb_V2->setReadOnly(true);
  ui->dsb_V2->setFocusPolicy(Qt::NoFocus);
  ui->dsb_V3->setReadOnly(true);
  ui->dsb_V3->setFocusPolicy(Qt::NoFocus);
  ui->dsb_a2s->setReadOnly(true);
  ui->dsb_a2s->setFocusPolicy(Qt::NoFocus);
  ui->dsbQ1->setReadOnly(true);
  ui->dsbQ1->setFocusPolicy(Qt::NoFocus);

  ui->dsbQ1->setDecimals(4);
  ui->dsbQ2->setReadOnly(true);
  ui->dsbQ2->setFocusPolicy(Qt::NoFocus);
  ui->dsbQ2->setDecimals(4);

  ui->dsbQ3->setReadOnly(true);
  ui->dsbQ3->setFocusPolicy(Qt::NoFocus);
  ui->dsbQ3->setDecimals(4);

  ui->dsbTotalA1->setReadOnly(true);
  ui->dsbTotalA1->setFocusPolicy(Qt::NoFocus);
  ui->dsbTotalA2->setReadOnly(true);
  ui->dsbTotalA2->setFocusPolicy(Qt::NoFocus);
  ui->dsbTotalA3->setReadOnly(true);
  ui->dsbTotalA3->setFocusPolicy(Qt::NoFocus);

  ui->dsbTotalV1->setReadOnly(true);
  ui->dsbTotalV1->setFocusPolicy(Qt::NoFocus);
  ui->dsbTotalV2->setReadOnly(true);
  ui->dsbTotalV2->setFocusPolicy(Qt::NoFocus);
  ui->dsbTotalV3->setReadOnly(true);
  ui->dsbTotalV3->setFocusPolicy(Qt::NoFocus);

  ui->dsbResQMetSeg->setReadOnly(true);
  ui->dsbResQMetSeg->setFocusPolicy(Qt::NoFocus);
  ui->dsbResQMetSeg->setDecimals(4);

  ui->dsbResQLitSeg->setReadOnly(true);
  ui->dsbResQLitSeg->setFocusPolicy(Qt::NoFocus);
  ui->dsbResQLitSeg->setDecimals(4);

  ui->dsbResQMetDia->setReadOnly(true);
  ui->dsbResQMetDia->setFocusPolicy(Qt::NoFocus);
  ui->dsbResQMetDia->setDecimals(4);

  //valores maximos para longitud
  ui->dsbLongitud1->setMaximum(999);
  ui->dsbLongitud2->setMaximum(std::numeric_limits<double>::max());
  //valores maximos y digitos decimales para el tiempo
  ui->dsbT1->setMaximum(999);
  ui->dsbT2->setMaximum(999);
  ui->dsbT3->setMaximum(999);

  //valores maximos y digitos decimales para el velocidad
  ui->dsbV1->setMaximum(std::numeric_limits<double>::max());
  ui->dsbV2->setMaximum(std::numeric_limits<double>::max());
  ui->dsbV3->setMaximum(std::numeric_limits<double>::max());

  //valores maximos y digitos decimales para el ancho inicial
  ui->dsb_a1->setMaximum(999);
  ui->dsb_a1s->setMaximum(std::numeric_limits<double>::max());
  //valores maximos y digitos decimales para la altura
  ui->dsb_h1->setMaximum(999);
  ui->dsb_h2->setMaximum(999);
  ui->dsb_h3->setMaximum(999);

  //valores maximos y digitos decimales para el area parcial
  ui->dsbA1->setMaximum(std::numeric_limits<double>::max());
  ui->dsbA2->setMaximum(std::numeric_limits<double>::max());
  ui->dsbA3->setMaximum(std::numeric_limits<double>::max());

  //valores maximos y digitos decimales para el tiempo s2
  ui->dsb_T1->setMaximum(999);
  ui->dsb_T2->setMaximum(999);
  ui->dsb_T3->setMaximum(999);

  //valores maximos y digitos decimales para ancho final
  ui->dsb_a2->setMaximum(999);
  ui->dsb_a2s->setMaximum(std::numeric_limits<double>::max());

  //valores maximos y digitos decimales para la altura s2
  ui->dsb_h1s->setMaximum(999);
  ui->dsb_h2s->setMaximum(999);
  ui->dsb_h3s->setMaximum(999);
  //valores maximos para las areas parciales
  ui->dsb_A1->setMaximum(std::numeric_limits<double>::max());
  ui->dsb_A2->setMaximum(std::numeric_limits<double>::max());
  ui->dsb_A3->setMaximum(std::numeric_limits<double>::max());

  //valores maximos y digitos decimales para los totales de caudales
  ui->dsbResQMetDia->setMaximum(std::numeric_limits<double>::max());
  ui->dsbResQMetDia->setDecimals(3);
  ui->dsbResQLitSeg->setMaximum(std::numeric_limits<double>::max());
  ui->dsbResQLitSeg->setDecimals(3);
  ui->dsbResQMetSeg->setMaximum(std::numeric_limits<double>::max());
  ui->dsbResQMetSeg->setDecimals(4);

  //valores maximos para areas totales
  ui->dsbTotalA1->setMaximum(std::numeric_limits<double>::max());
  ui->dsbTotalA2->setMaximum(std::numeric_limits<double>::max());
  ui->dsbTotalA3->setMaximum(std::numeric_limits<double>::max());
  //valores maximos para velocidad total
  ui->dsbTotalV1->setMaximum(std::numeric_limits<double>::max());
  ui->dsbTotalV2->setMaximum(std::numeric_limits<double>::max());
  ui->dsbTotalV3->setMaximum(std::numeric_limits<double>::max());
  //valores maximos para caudales parciales
  ui->dsbQ1->setMaximum(std::numeric_limits<double>::max());
  ui->dsbQ2->setMaximum(std::numeric_limits<double>::max());
  ui->dsbQ3->setMaximum(std::numeric_limits<double>::max());

}
//limpiar controles del panel caudal volumetrico.
void MainClass::on_btnLimpiar_clicked()
{
  ui->dspVelocidad1->setValue(0.00);
  ui->dspVelocidad2->setValue(0.00);
  ui->dspVelocidad3->setValue(0.00);
  ui->dspTiempo1->setValue(0.00);
  ui->dspTiempo2->setValue(0.00);
  ui->dspTiempo3->setValue(0.00);
  ui->dsbPromedio->setValue(0.00);
  ui->dspTiempoPromedio->setValue(0.00);
  ui->qLitrosSeg->setValue(0.00);
  ui->qMetrosCubDia->setValue(0.00);
  ui->qMetrosCubSeg->setValue(0.00);
  ui->dspVelocidad1->setFocus(Qt::OtherFocusReason);
  ui->dspVelocidad1->selectAll();
  //  _isClean=Clean;

}
/*********************************************************************************************************/
/*********************************************************************************************************/
/**********funciones y logica del panel de caudal por flotador********************************************/

/**
 * @brief MainClass::on_dsbLongitud1_valueChanged
 * @param arg1
 * *asigna el valor de longitud 1 a longitud 2.
 */
//void MainClass::on_dsbLongitud1_valueChanged(double arg1)
//{
//  ui->dsbLongitud2->setValue(arg1/2);
//}


void MainClass::calVelocity(double val1, double val2, opV op)
{
  double res=0;
  switch (op) {
    case opV::v1:
      res=val1/(val2*100);
      ui->dsbV1->setValue(res);
      break;

    case opV::v2:
      res=val1/(val2*100);
      ui->dsbV2->setValue(res);
      break;
    case opV::v3:
      res=val1/(val2*100);
      ui->dsbV3->setValue(res);
      break;
    case opV::v1_c:
      res=val1/(val2*100);
      ui->dsb_V1->setValue(res);
      break;
    case opV::v2_c:
      res=val1/(val2*100);
      ui->dsb_V2->setValue(res);
      break;
    case opV::v3_c:
      res=val1/(val2*100);
      ui->dsb_V3->setValue(res);
      break;
    }

}

void MainClass::calAreaParcial(double val1, double val2, opAParcial aP)
{
  double res=0;
  switch (aP) {
    case MainClass::opAParcial::Ap1:
      res=(val1*val2)/10000;
      ui->dsbA1->setValue(res);
      break;

    case MainClass::opAParcial::Ap2:
      res=(val1*val2)/10000;
      ui->dsbA2->setValue(res);
      break;
    case MainClass::opAParcial::Ap3:
      res=(val1*val2)/10000;
      ui->dsbA3->setValue(res);
      break;
    case MainClass::opAParcial::Ap1_c:
      res=(val1*val2)/10000;
      ui->dsb_A1->setValue(res);
      break;
    case MainClass::opAParcial::Ap2_c:
      res=(val1*val2)/10000;
      ui->dsb_A2->setValue(res);
      break;
    case MainClass::opAParcial::Ap3_c:
      res=(val1*val2)/10000;
      ui->dsb_A3->setValue(res);
      break;
    }
}

void MainClass::calAreaTotal(double val1, double val2, C_AreaTotal aT)
{
  double res=0;
  switch (aT) {
    case MainClass::C_AreaTotal::At1:
      res=(val1+val2)/2;
      ui->dsbTotalA1->setValue(res);
      break;
    case MainClass::C_AreaTotal::At2:
      res=(val1+val2)/2;
      ui->dsbTotalA2->setValue(res);
      break;
    case MainClass::C_AreaTotal::At3:
      res=(val1+val2)/2;
      ui->dsbTotalA3->setValue(res);
      break;

    }

}

void MainClass::calVelocidadTotal(double val1, double val2, MainClass::C_VelocidadTotal vT)
{
  double res=0;
  switch (vT) {
    case MainClass::C_VelocidadTotal::Vt1:
      res=(val1+val2)/2;
      ui->dsbTotalV1->setValue(res);
      break;
    case MainClass::C_VelocidadTotal::Vt2:
      res=(val1+val2)/2;
      ui->dsbTotalV2->setValue(res);
      break;
    case MainClass::C_VelocidadTotal::Vt3:
      res=(val1+val2)/2;
      ui->dsbTotalV3->setValue(res);
      break;

    }
}

void MainClass::calQParcial(double val1, double val2, MainClass::C_QParcial qP)
{
  double res=0;
  switch (qP) {
    case MainClass::C_QParcial::Qp1:
      res=(val1*val2);
      ui->dsbQ1->setValue(res);
      break;
    case MainClass::C_QParcial::Qp2:
      res=(val1*val2);
      ui->dsbQ2->setValue(res);
      break;
    case MainClass::C_QParcial::Qp3:
      res=(val1*val2);
      ui->dsbQ3->setValue(res);
      break;

    }
}
/********metodos para calcular el promedio de la velocidad y el tiempo.************/
void MainClass::timeAverage(QList<double> v)
{
  double res=0;
  for(const auto &i:v){
      res=res+i;
    }

  ui->dspTiempoPromedio->setValue(res/3);
  //  _isClean=W_data;

}
/*********calcula el caudal en litros por segundo********/
void MainClass::qLitros_Segundos(double vProm, double tProm)
{
  double res= vProm/tProm;
  ui->qLitrosSeg->setValue(res);
  //  _isClean=W_data;
}
/*********calcula el caudal en metros cúbicos por segundo********/
void MainClass::qMetCub_segundo(double pLitrosSeg)
{
  double res=pLitrosSeg/1000;
  ui->qMetrosCubSeg->setValue(res);
  //  _isClean=W_data;
}
/*********calcula el caudal en metros cúbicos por día********/
void MainClass::qMetCub_Dia(double qMetCubSeg)
{
  double res=qMetCubSeg*3600*24;
  ui->qMetrosCubDia->setValue(res);
  //  _isClean=W_data;
  //  qDebug()<<res;
}
void MainClass::speedAverage(QList<double> v)
{
  double res=0;
  for(const auto &i:v){
      res=res+i;
    }

  ui->dsbPromedio->setValue(res/3);
  //  _isClean=W_data;

}
/**********cambiar entre paginas del stackWidget**************/
void MainClass::on_btnVolumetrico_clicked()
{
  //  if(_isClean==W_data) return;

  ui->stackedWidget->setCurrentIndex(2);
  //  on_btnLimpiar_clicked();r
}

void MainClass::on_btnFlotador_clicked()
{
  ui->stackedWidget->setCurrentIndex(1);
}

void MainClass::on_btnCorrectometro_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);
}
/**
 * metodo change de los spin box, velicidad 1,2,3
 *
 */
void MainClass::on_dspVelocidad1_valueChanged(double arg1)
{
  QList<double> v;
  v<<arg1<<ui->dspVelocidad2->value()<<ui->dspVelocidad3->value();
  speedAverage(v);
  qLitros_Segundos(ui->dsbPromedio->value(),ui->dspTiempoPromedio->value());
  qMetCub_segundo(ui->qLitrosSeg->value());
  qMetCub_Dia(ui->qMetrosCubSeg->value());
}

void MainClass::on_dspVelocidad2_valueChanged(double arg1)
{
  QList<double> v;
  v<<ui->dspVelocidad1->value()<<arg1<<ui->dspVelocidad3->value();
  speedAverage(v);
  qLitros_Segundos(ui->dsbPromedio->value(),ui->dspTiempoPromedio->value());
  qMetCub_segundo(ui->qLitrosSeg->value());
  qMetCub_Dia(ui->qMetrosCubSeg->value());

}

void MainClass::on_dspVelocidad3_valueChanged(double arg1)
{
  QList<double> v;
  v<<ui->dspVelocidad1->value()<<ui->dspVelocidad2->value()<<arg1;
  speedAverage(v);
  qLitros_Segundos(ui->dsbPromedio->value(),ui->dspTiempoPromedio->value());
  qMetCub_segundo(ui->qLitrosSeg->value());
  qMetCub_Dia(ui->qMetrosCubSeg->value());
}
/**
 * metodo change de los spin box, tiempo 1,2,3
 *
 */

void MainClass::on_dspTiempo1_valueChanged(double arg1)
{
  QList<double> v;
  v<<arg1<<ui->dspTiempo2->value()<<ui->dspTiempo3->value();
  timeAverage(v);
  qLitros_Segundos(ui->dsbPromedio->value(),ui->dspTiempoPromedio->value());
  qMetCub_segundo(ui->qLitrosSeg->value());
  qMetCub_Dia(ui->qMetrosCubSeg->value());
}

void MainClass::on_dspTiempo2_valueChanged(double arg1)
{
  QList<double> v;
  v<<ui->dspTiempo1->value()<<arg1<<ui->dspTiempo3->value();
  timeAverage(v);
  qLitros_Segundos(ui->dsbPromedio->value(),ui->dspTiempoPromedio->value());
  qMetCub_segundo(ui->qLitrosSeg->value());
  qMetCub_Dia(ui->qMetrosCubSeg->value());
}

void MainClass::on_dspTiempo3_valueChanged(double arg1)
{
  QList<double> v;
  v<<ui->dspTiempo1->value()<<ui->dspTiempo2->value()<<arg1;
  timeAverage(v);
  qLitros_Segundos(ui->dsbPromedio->value(),ui->dspTiempoPromedio->value());
  qMetCub_segundo(ui->qLitrosSeg->value());
  qMetCub_Dia(ui->qMetrosCubSeg->value());

}
void MainClass::calQMetrosSeg(double val1, double val2, double val3)
{
  double res=0;
  res=(val1+val2+val3);
  ui->dsbResQMetSeg->setValue(res);
}

void MainClass::calQLitrosSeg(double val1)
{
  double res=0;
  res=(val1*1000);
  ui->dsbResQLitSeg->setValue(res);
}

void MainClass::calQMetrosDia(double val1)
{
  double res=0;
  res=(val1*3600*24);
  ui->dsbResQMetDia->setValue(res);

}
/******metodos del panel caudal flotador*****/
void MainClass::on_dsbLongitud1_valueChanged(double arg1)
{
  ui->dsbLongitud2->setValue((arg1/2));
  //  if(ui->dsbT1->value()!=0)
  calVelocity(ui->dsbLongitud2->value(),ui->dsbT1->value(),v1);

  calVelocity(ui->dsbLongitud2->value(),ui->dsbT2->value(),v2);
  calVelocity(ui->dsbLongitud2->value(),ui->dsbT3->value(),v3);
  calVelocity(ui->dsbLongitud2->value(),ui->dsb_T1->value(),v1_c);
  calVelocity(ui->dsbLongitud2->value(),ui->dsb_T2->value(),v2_c);
  calVelocity(ui->dsbLongitud2->value(),ui->dsb_T3->value(),v3_c);

  //calcular velocidad total
  //  if(ui->dsbV1->value()!=0 && ui->dsb_V1->value()!=0)
  calVelocidadTotal(ui->dsbV1->value(),ui->dsb_V1->value(),C_VelocidadTotal::Vt1);

  calVelocidadTotal(ui->dsbV2->value(),ui->dsb_V2->value(),C_VelocidadTotal::Vt2);
  calVelocidadTotal(ui->dsbV3->value(),ui->dsb_V3->value(),C_VelocidadTotal::Vt3);
  //calcular caudales parciales
  //  if(ui->dsbTotalA1->value()!=0 && ui->dsbTotalV1->value()!=0)
  calQParcial(ui->dsbTotalA1->value(),ui->dsbTotalV1->value(),MainClass::C_QParcial::Qp1);
  calQParcial(ui->dsbTotalA2->value(),ui->dsbTotalV2->value(),MainClass::C_QParcial::Qp2);
  calQParcial(ui->dsbTotalA3->value(),ui->dsbTotalV3->value(),MainClass::C_QParcial::Qp3);
  //calcular caudal total, de los caudales
  calQMetrosSeg(ui->dsbQ1->value(),ui->dsbQ2->value(),ui->dsbQ3->value());
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

void MainClass::on_dsbT1_valueChanged(double arg1)
{
  if(arg1==0){
      ui->dsbV1->setValue(0);
      return;
    }
  calVelocity(ui->dsbLongitud2->value(),arg1,v1);
}

void MainClass::on_dsbT2_valueChanged(double arg1)
{
  if(arg1==0){
      ui->dsbV2->setValue(0);
      return;
    }
  calVelocity(ui->dsbLongitud2->value(),arg1,v2);
}

void MainClass::on_dsbT3_valueChanged(double arg1)
{
  if(arg1==0){
      ui->dsbV3->setValue(0);
      return;
    }
  calVelocity(ui->dsbLongitud2->value(),arg1,v3);
}

void MainClass::on_dsb_T1_valueChanged(double arg1)
{
  if(arg1==0){
      ui->dsb_V1->setValue(0);
      return;
    }
  calVelocity(ui->dsbLongitud2->value(),arg1,v1_c);
}

void MainClass::on_dsb_T2_valueChanged(double arg1)
{
  if(arg1==0){
      ui->dsb_V2->setValue(0);
      return;
    }
  calVelocity(ui->dsbLongitud2->value(),arg1,v2_c);
}

void MainClass::on_dsb_T3_valueChanged(double arg1)
{
  if(arg1==0){
      ui->dsb_V3->setValue(0);
      return;
    }
  calVelocity(ui->dsbLongitud2->value(),arg1,v3_c);
}

void MainClass::on_dsb_a1_valueChanged(double arg1)
{
  double res=0;
  res=(arg1/3);
  ui->dsb_a1s->setValue(res);

  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h1->value(),opAParcial::Ap1);
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h2->value(),opAParcial::Ap2);
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h3->value(),opAParcial::Ap3);

  //calcular areas totales
  calAreaTotal(ui->dsbA1->value(),ui->dsb_A1->value(),MainClass::C_AreaTotal::At1);
  calAreaTotal(ui->dsbA2->value(),ui->dsb_A2->value(),MainClass::C_AreaTotal::At2);
  calAreaTotal(ui->dsbA3->value(),ui->dsb_A3->value(),MainClass::C_AreaTotal::At3);

  //calcular areas parciales
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h1->value(),MainClass::opAParcial::Ap1);
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h2->value(),MainClass::opAParcial::Ap2);
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h3->value(),MainClass::opAParcial::Ap3);
  calAreaTotal(ui->dsbA1->value(),ui->dsb_A1->value(),MainClass::C_AreaTotal::At1);
  calAreaTotal(ui->dsbA2->value(),ui->dsb_A2->value(),MainClass::C_AreaTotal::At2);
  calAreaTotal(ui->dsbA3->value(),ui->dsb_A3->value(),MainClass::C_AreaTotal::At3);

}

void MainClass::on_dsb_a2_valueChanged(double arg1)
{
  double res=0;
  res=(arg1/3);
  ui->dsb_a2s->setValue(res);

  calAreaParcial(ui->dsb_a2s->value(),ui->dsb_h1s->value(),opAParcial::Ap1_c);
  calAreaParcial(ui->dsb_a2s->value(),ui->dsb_h2s->value(),opAParcial::Ap2_c);
  calAreaParcial(ui->dsb_a2s->value(),ui->dsb_h3s->value(),opAParcial::Ap3_c);

  //calcular areas totales
  calAreaTotal(ui->dsbA1->value(),ui->dsb_A1->value(),MainClass::C_AreaTotal::At1);
  calAreaTotal(ui->dsbA2->value(),ui->dsb_A2->value(),MainClass::C_AreaTotal::At2);
  calAreaTotal(ui->dsbA3->value(),ui->dsb_A3->value(),MainClass::C_AreaTotal::At3);

  //calcular areas parciales
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h1->value(),MainClass::opAParcial::Ap1);
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h2->value(),MainClass::opAParcial::Ap2);
  calAreaParcial(ui->dsb_a1s->value(),ui->dsb_h3->value(),MainClass::opAParcial::Ap3);
  calAreaTotal(ui->dsbA1->value(),ui->dsb_A1->value(),MainClass::C_AreaTotal::At1);
  calAreaTotal(ui->dsbA2->value(),ui->dsb_A2->value(),MainClass::C_AreaTotal::At2);
  calAreaTotal(ui->dsbA3->value(),ui->dsb_A3->value(),MainClass::C_AreaTotal::At3);
}

void MainClass::on_dsb_h1_valueChanged(double arg1)
{
  calAreaParcial(ui->dsb_a1s->value(),arg1,opAParcial::Ap1);
}

void MainClass::on_dsb_h2_valueChanged(double arg1)
{
  calAreaParcial(ui->dsb_a1s->value(),arg1,opAParcial::Ap2);
}


void MainClass::on_dsb_h3_valueChanged(double arg1)
{
  calAreaParcial(ui->dsb_a1s->value(),arg1,opAParcial::Ap3);
}

void MainClass::on_dsb_h1s_valueChanged(double arg1)
{
  calAreaParcial(ui->dsb_a2s->value(),arg1,opAParcial::Ap1_c);
}

void MainClass::on_dsb_h2s_valueChanged(double arg1)
{
  calAreaParcial(ui->dsb_a2s->value(),arg1,opAParcial::Ap2_c);
}

void MainClass::on_dsb_h3s_valueChanged(double arg1)
{
  calAreaParcial(ui->dsb_a2s->value(),arg1,opAParcial::Ap3_c);
}

void MainClass::on_dsbV1_valueChanged(double arg1)
{
  //calcular velocidad total
  calVelocidadTotal(arg1,ui->dsb_V1->value(),C_VelocidadTotal::Vt1);
}

void MainClass::on_dsb_V1_valueChanged(double arg1)
{
  calVelocidadTotal(ui->dsbV1->value(),arg1,C_VelocidadTotal::Vt1);
}

void MainClass::on_dsbV2_valueChanged(double arg1)
{
  calVelocidadTotal(arg1,ui->dsb_V2->value(),C_VelocidadTotal::Vt2);
}

void MainClass::on_dsb_V2_valueChanged(double arg1)
{
  calVelocidadTotal(ui->dsbV2->value(),arg1,C_VelocidadTotal::Vt2);
}

void MainClass::on_dsbV3_valueChanged(double arg1)
{
  calVelocidadTotal(arg1,ui->dsb_V3->value(),C_VelocidadTotal::Vt3);
}

void MainClass::on_dsb_V3_valueChanged(double arg1)
{
  calVelocidadTotal(ui->dsb_V3->value(),arg1,C_VelocidadTotal::Vt3);
}

void MainClass::on_dsbA1_valueChanged(double arg1)
{
  calAreaTotal(arg1,ui->dsb_A1->value(),MainClass::C_AreaTotal::At1);
}

void MainClass::on_dsb_A1_valueChanged(double arg1)
{
  calAreaTotal(ui->dsbA1->value(),arg1,MainClass::C_AreaTotal::At1);

}

void MainClass::on_dsbA2_valueChanged(double arg1)
{
  calAreaTotal(arg1,ui->dsb_A2->value(),MainClass::C_AreaTotal::At2);
}

void MainClass::on_dsb_A2_valueChanged(double arg1)
{
  calAreaTotal(ui->dsbA2->value(),arg1,MainClass::C_AreaTotal::At2);
}

void MainClass::on_dsbA3_valueChanged(double arg1)
{
  calAreaTotal(arg1,ui->dsb_A3->value(),MainClass::C_AreaTotal::At3);
}

void MainClass::on_dsb_A3_valueChanged(double arg1)
{
  calAreaTotal(ui->dsbA3->value(),arg1,MainClass::C_AreaTotal::At3);
}

void MainClass::on_dsbTotalA1_valueChanged(double arg1)
{
  calQParcial(arg1,ui->dsbTotalV1->value(),MainClass::C_QParcial::Qp1);
}

void MainClass::on_dsbTotalV1_valueChanged(double arg1)
{
  calQParcial(ui->dsbTotalA1->value(),arg1,MainClass::C_QParcial::Qp1);
  calQMetrosSeg(ui->dsbQ1->value(),ui->dsbQ2->value(),ui->dsbQ3->value());
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

void MainClass::on_dsbTotalA2_valueChanged(double arg1)
{
  calQParcial(arg1,ui->dsbTotalV2->value(),MainClass::C_QParcial::Qp2);
}

void MainClass::on_dsbTotalV2_valueChanged(double arg1)
{
  calQParcial(ui->dsbTotalA2->value(),arg1,MainClass::C_QParcial::Qp2);
  calQMetrosSeg(ui->dsbQ1->value(),ui->dsbQ2->value(),ui->dsbQ3->value());
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

void MainClass::on_dsbTotalA3_valueChanged(double arg1)
{
  calQParcial(arg1,ui->dsbTotalV3->value(),MainClass::C_QParcial::Qp3);
}

void MainClass::on_dsbTotalV3_valueChanged(double arg1)
{
  calQParcial(ui->dsbTotalA3->value(),arg1,MainClass::C_QParcial::Qp3);
  calQMetrosSeg(ui->dsbQ1->value(),ui->dsbQ2->value(),ui->dsbQ3->value());
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

void MainClass::on_dsbQ1_valueChanged(double arg1)
{
  //calcular caudal total, de los caudales
  calQMetrosSeg(arg1,ui->dsbQ2->value(),ui->dsbQ3->value());
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

void MainClass::on_dsbQ2_valueChanged(double arg1)
{
  //calcular caudal total, de los caudales
  calQMetrosSeg(ui->dsbQ1->value(),arg1,ui->dsbQ3->value());
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

void MainClass::on_dsbQ3_valueChanged(double arg1)
{
  //calcular caudal total, de los caudales
  calQMetrosSeg(ui->dsbQ1->value(),ui->dsbQ2->value(),arg1);
  calQLitrosSeg(ui->dsbResQMetSeg->value());
  calQMetrosDia(ui->dsbResQMetSeg->value());
}

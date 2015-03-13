#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "soapcurrentTimeProxy.h"
#include "currentTime.nsmap"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //calcProxy service;
    currentTimeProxy service;
    double result=0;
      if (service.currentTime(1.0, 2.0, result) == SOAP_OK)
         std::cout << "The sum of 1.0 and 2.0 is " << result << std::endl;
      else
         service.soap_stream_fault(std::cerr);
      service.destroy(); // delete data and release memory
}

MainWindow::~MainWindow()
{
    delete ui;
}

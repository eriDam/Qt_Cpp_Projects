#include "mainwindow.h"
#include "ui_mainwindow.h"
/*
 * Crearé una interfaz sencilla, constará de un radio buton y un par de botones,
 * cuando el radiob esté seleccionado, desactivará los botones mediante señales
 * Se puede hacer mediante la interfaz graf o mediante código
 */

//Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   //el puntero ui, muestra o acomoda toda la interfaz grafica
    ui->setupUi(this);
    /*En el constructor, utilizamos la función connect y nos sale lo que le tenemos que pasar
    en varias sugerencias, le pasamos, el sendero(nuestro radioB, después la señal SIGNAL, AL
    abrir parentesis nos salen todas las señales del radiob, seleccionamos toggled, despues
    pasamos el otro objeto de nuestra interfaz grafica que va a ser afectado por esta señal que será el
    ui pushButton y el SLOT que ser afectado, setDisabled

    RESUMEN: Va a conectar la señal del radioButon la seña toggled q es emitida cuando clickeadmos y
    va a ser recibida por el Slot de setDisabled que es lo que se habilita, una señal puede afectar
    varios slots, podemos poner otro boton y que se ve a afectado también*/
    connect(ui->radioButton,SIGNAL(toggled(bool)),ui->pushButton,SLOT(setDisabled(bool)));
    connect(ui->radioButton,SIGNAL(toggled(bool)),ui->pushButton_2,SLOT(setDisabled(bool)));

    //Podemos hacer lo contrario, disconnect
    disconnect(ui->radioButton,SIGNAL(toggled(bool)),ui->pushButton_2,SLOT(setDisabled(bool)));

    //Conecto la señal del boton clicked con el Slot creado por mi en esta clase(por eso se le pone el puntero this)
    //y va  a buscar el Slot mi_Slot
    connect(ui->pushButton,SIGNAL(clicked()),
            this, SLOT(mi_Slot()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

//Método clicked (cuando sea presionado), generado automaticamente desde
//la interfaz grafica sobre el pushButton-btn_dcho-Go To Slot
void MainWindow::on_pushButton_2_clicked()
{
    //cuando hagamos click en este botón si el radioButton está activado/habilitado,
    //se deshabilitará
    if(ui->radioButton->isEnabled())
    {
        ui->radioButton->setEnabled(false);
    }
    //En caso contrario
    else{
        ui->radioButton->setEnabled(true);
    }
}

//Método clicked (cuando sea presionado)
void MainWindow::mi_Slot()
{
    //cuando hagamos click en este botón si el radioButton está activado/habilitado,
    //se deshabilitará
    if(ui->radioButton->isEnabled())
    {
        ui->radioButton->setEnabled(false);
    }
    //En caso contrario
    else{
        ui->radioButton->setEnabled(true);
    }
}

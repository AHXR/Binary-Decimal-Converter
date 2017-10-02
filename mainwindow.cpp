/*
* Binary-Decimal Converter - Simple tool that can convert binary numbers to decimal and back.
* Copyright (C) 2017 AHXR
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
//-----------------------------------------------------------------
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "conversion.h"
#include <cctype>
#include <cstdlib>

unsigned short
    i_bit = DEFAULT_BIT_SIZE;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setBit( i_bit );
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * As I'm typing this ... this was my first time using Qt's GUI framework.
 * I'm not sure if there is a feature that allows me to group a bunch of actions
 * together and have a unique option checked.
 *
 * I couldn't find one. So I decided to just write a small function that not only
 * sets the user's conversion bit, but it also automatically updates the rest of the
 * checkboxes so only one bit option can be selected!
*/
void MainWindow::setBit( unsigned short bit ) {
    i_bit = bit;

    // Looping through all the actions found in the "Bits" menu.
    foreach( QAction * obj, ui->menuBits->actions() ) {
        obj->setChecked(false);
    }

    switch( bit ) {
        case 8: {
            ui->action8_2->setChecked(true);
            break;
        }
        case 16: {
            ui->action16->setChecked(true);
            break;
        }
        case 32: {
            ui->action32->setChecked(true);
            break;
        }
        case 64: {
            ui->action64->setChecked(true);
            break;
        }
        case 128: {
            ui->action128->setChecked(true);
            break;
        }
        case 256: {
            ui->action256->setChecked(true);
            break;
        }
        default: {
            ui->action8_2->setChecked(true);
            break;
        }
    }
}

/*
 * This is a very quick and light function that scans the input to make sure
 * there are only numbers involved.
*/
bool validateInput( QString input ) {

    std::string
            s_input = input.toStdString();

    if( s_input.length() <= 0 )
        return false;

    for( size_t i = 0; i < s_input.length(); i ++ ) {
        if( !std::isdigit( s_input[ i ] ) ) {
            return false;
        }
    }

    return true;
}

void MainWindow::on_binaryButton_clicked()
{
    if( validateInput( ui->txtNum->text() ) )
        ui->txtNum->setText( QString::fromStdString( convertToBinary( i_bit, std::stoi( ui->txtNum->text().toStdString() ) ) ) );
}

void MainWindow::on_decimalButton_clicked()
{
    if( validateInput( ui->txtNum->text() ) )
        ui->txtNum->setText( QString::fromStdString( std::to_string( convertToDecimal( i_bit, ui->txtNum->text().toStdString() ) ) ) );
}

void MainWindow::on_actionExit_triggered()
{
    QCoreApplication::quit();
}

void MainWindow::on_action8_2_triggered()
{
    setBit( 8 );
}

void MainWindow::on_action32_triggered()
{
    setBit( 32 );
}

void MainWindow::on_action16_triggered()
{
    setBit( 16 );
}

void MainWindow::on_action64_triggered()
{
    setBit( 64 );
}

void MainWindow::on_action128_triggered()
{
    setBit( 128 );
}

void MainWindow::on_action256_triggered()
{
    setBit( 256 );
}

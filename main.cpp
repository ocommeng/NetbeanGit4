/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: ocommeng
 *
 * Created on 15 janvier 2018, 16:56
 */

#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    cout << "Hello Git World" << endl;
    cout << "Salut" << endl;
    
    // create and show your widgets here

    return app.exec();
}

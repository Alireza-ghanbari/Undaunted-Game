#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SplashScreen.h"
#include "LoginScreen.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    splash = new SplashScreen(this);
    login = new LoginScreen();

    setCentralWidget(splash);


    connect(splash, &SplashScreen::goToLogin, this, [this](){
        setCentralWidget(login);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

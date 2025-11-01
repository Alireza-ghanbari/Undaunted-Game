#include "boardscreen.h"
#include "ui_boardscreen.h"

BoardScreen::BoardScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BoardScreen)
{
    ui->setupUi(this);
}

BoardScreen::~BoardScreen()
{
    delete ui;
}

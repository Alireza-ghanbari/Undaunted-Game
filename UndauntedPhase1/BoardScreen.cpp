#include "BoardScreen.h"
#include "ui_BoardScreen.h"
#include <QDebug>

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

void BoardScreen::loadMap(const QString &mapName)
{
    if(m_board.loadMap(mapName)) {
        qDebug() << "Map loaded into boradScreen" << mapName;

    }
}

#ifndef BOARD_H
#define BOARD_H

#include <QVector>
#include <QString>
#include "Cell.h"

class Board
{
public:
    Board();

    bool loadMap(const QString &mapName);
    const QVector<Cell>& cells() const { return m_cells; }

private:
    QVector<Cell> m_cells;
};

#endif

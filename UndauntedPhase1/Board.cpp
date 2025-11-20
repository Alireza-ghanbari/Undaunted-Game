#include "Board.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

Board::Board()
{
}

bool Board::loadMap(const QString &mapName)
{
    QString filePath = ":/maps/" + mapName + ".txt";
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Cannot load map:" << filePath;
        return false;
    }

    QTextStream in(&file);

    m_cells.clear();

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split("|", Qt::SkipEmptyParts);

        for (const QString &p : parts) {
            QString trimmed = p.trimmed();
            QStringList data = trimmed.split(":");
            if (data.size() != 2) continue;

            QString id = data[0];
            int type = data[1].toInt();

            m_cells.append(Cell(id, type));
        }
    }

    return true;
}

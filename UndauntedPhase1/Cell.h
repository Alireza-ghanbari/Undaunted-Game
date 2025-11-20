#ifndef CELL_H
#define CELL_H

#include <QString>

class Cell
{
public:
    Cell();
    Cell(const QString &id, int type);

    QString id() const { return m_id; }
    int type() const { return m_type; }

private:
    QString m_id;   // مثل A01 یا B05
    int m_type;     // 0 یا 1 یا 2
};

#endif

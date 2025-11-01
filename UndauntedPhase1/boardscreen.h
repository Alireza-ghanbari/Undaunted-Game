#ifndef BOARDSCREEN_H
#define BOARDSCREEN_H

#include <QWidget>

namespace Ui {
class BoardScreen;
}

class BoardScreen : public QWidget
{
    Q_OBJECT

public:
    explicit BoardScreen(QWidget *parent = nullptr);
    ~BoardScreen();

private:
    Ui::BoardScreen *ui;
};

#endif // BOARDSCREEN_H

#ifndef CLONEPURIFIERMAIN_H
#define CLONEPURIFIERMAIN_H

#include <QMainWindow>

namespace Ui {
    class ClonePurifierMain;
}

class ClonePurifierMain : public QMainWindow
{
    Q_OBJECT

    // test push
public:
    explicit ClonePurifierMain(QWidget *parent = 0);
    ~ClonePurifierMain();

private:
    Ui::ClonePurifierMain *ui;
};

#endif // CLONEPURIFIERMAIN_H

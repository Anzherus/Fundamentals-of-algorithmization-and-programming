#include <QApplication>
#include <QPushButton>
#include "main_window.h"

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);

    main_window mainWindow;
    mainWindow.show();

    return QApplication::exec();
}

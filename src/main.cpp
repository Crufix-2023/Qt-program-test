#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    QLabel label("Hello, Qt!");
    label.setParent(&window);
    window.show();
    return app.exec();
}
#include <QApplication>
#include <QPushButton>

int main (int c, char **v)
{
    QApplication app(c,v);

    QPushButton b("Hello ",NULL);
    b.show();
    return app.exec();
}

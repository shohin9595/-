#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QWidget>
#include <QMouseEvent>

class NewGame : public QWidget
{
public:
    NewGame(QWidget *parent = 0);
};

NewGame::NewGame(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *quit = new QPushButton(tr("Quit"), this);
    quit->setGeometry(50, 140, 100, 30);/*отступ сбоку, отступ сверху, длина, ширина*/
    quit->setFont(QFont("Times", 12, QFont::Bold));

    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

class MyWidget : public QWidget
 {
 public:
     MyWidget(QWidget *parent = 0);
 };

 MyWidget::MyWidget(QWidget *parent)
     : QWidget(parent)
 {




     setFixedSize(200, 190);
     //NEW GAME
     QPushButton *new_game = new QPushButton(tr("New Game"), this);
     new_game->setGeometry(50, 20, 100, 30);/*отступ сбоку, отступ сверху, длина, ширина*/
     new_game->setFont(QFont("Times", 12, QFont::Bold));


     connect(new_game, SIGNAL(clicked()), qApp, SLOT(show(widget1)));

     //SAVED GAME
     QPushButton *saved_game = new QPushButton(tr("Saved Game"), this);
     saved_game ->setGeometry(50, 60, 100, 30);/*отступ сбоку, отступ сверху, длина, ширина*/
     saved_game ->setFont(QFont("Times", 11, QFont::Bold));

     //HELP
     QPushButton *help = new QPushButton(tr("Help"), this);
     help ->setGeometry(50, 100, 100, 30);/*отступ сбоку, отступ сверху, длина, ширина*/
     help ->setFont(QFont("Times", 12, QFont::Bold));

     //QUIT
     QPushButton *quit = new QPushButton(tr("Quit"), this);
     quit->setGeometry(50, 140, 100, 30);/*отступ сбоку, отступ сверху, длина, ширина*/
     quit->setFont(QFont("Times", 12, QFont::Bold));

     connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
 }



 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     MyWidget widget;
     widget.show();
     return app.exec();
 }

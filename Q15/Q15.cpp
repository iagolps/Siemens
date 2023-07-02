#include <QObject>
#include <QPushButton>
#include <QDebug>

class MyObject : public QObject
{
    Q_OBJECT

public slots:
    void buttonClicked()
    {
        qDebug() << "Button clicked!";
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Click me!");

    MyObject myObject;

    QObject::connect(&button, &QPushButton::clicked, &myObject, &MyObject::buttonClicked);

    button.show();

    return app.exec();
}

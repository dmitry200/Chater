#include <QApplication>
#include "MyClient.h"

// ----------------------------------------------------------------------
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MyClient     client("128.0.128.27", 2323);

    client.show();

    return app.exec();
}

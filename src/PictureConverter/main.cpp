#include <QCoreApplication>
#include <QDebug>
#include <QImage>
#include <QFile>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if(argc != 3)
    {
        qDebug() << "Need 2 parameter";
        return -1;
    }
    else
    {
        for(int i = 0; i < argc; i++)
        {
            qDebug()<<argv[i];
        }
    }

    if(!QFile::exists(argv[1]))
    {
        qDebug()<<"File not exist : " << argv[1];
        return - 1;
    }
    QImage img(argv[1]);
    bool result = img.save(argv[2]);
    if(result)
    {
        qDebug()<<"Convert Success !";

    }
    else
    {
        qDebug()<<"Convert Failed !";
        return -1;
    }
    return 0;
    return a.exec();
}

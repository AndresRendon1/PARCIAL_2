#ifndef REDIMENSION_H
#define REDIMENSION_H
#include <QImage>
#include <QBuffer>
#include <iostream>

using namespace std;


class Redimension : public QImage
{
public:
    Redimension();

private:
    string filename;
    int pixely;
    int pixelx;

};

#endif // REDIMENSION_H

#include "redimension.h"


Redimension::Redimension()
{
    filename = "../EjemploJonathan/images/imagen.jpg";
    QImage im ( filename.c_str());

    int a=im.width();
    int b=im.height();

    cout<<a<<" - "<< b <<endl;

    int pixely=30;
    int pixelx=30;

    cout <<"Intensidad de rojo es : "<<im.pixelColor(pixelx,pixely).red()<<endl;

}





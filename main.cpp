#include <iostream>
#include <QImage>
using namespace std;

int main()
{
    string archivo="../imagenes/images/circulo.jpg";//indicamos la ruta donde esta guardada la imagen
    QImage im(archivo.c_str());//objeto de la clase QImage asi abrimos la imagen
    //unsigned int pixelx=202;//pos pixel en x
    //unsigned int pixely=202;//pos pixel en y
    //cout<<"Intensidad del Rojo: "<<im.pixelColor(pixelx,pixely).red()<<endl;
    //cout<<"Intensidad del Rojo: "<<im.pixelColor(pixelx,pixely).green()<<endl;
    //cout<<"Intensidad del Rojo: "<<im.pixelColor(pixelx,pixely).blue()<<endl;
    cout<<"Redimensionando imagen..."<<endl;
    const int alto=16;
    const int ancho=16;
    im=im.scaled(alto,ancho,Qt::KeepAspectRatio);
    cout<<"Imagen redimensionada con exito: "<<im.width()<<endl;
    cout<<"Imagen redimensionada con exito: "<<im.height()<<endl;
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            unsigned int pixelx=i;
            unsigned int pixely=j;
            cout<<endl;
            cout<<"pixel: "<<"["<<i<<"]["<<j<<"]"<<endl;
            cout<<"Intensidad R: "<<im.pixelColor(pixelx,pixely).red()<<endl;
            cout<<"Intensidad G: "<<im.pixelColor(pixelx,pixely).green()<<endl;
            cout<<"Intensidad B: "<<im.pixelColor(pixelx,pixely).blue()<<endl;
        }
        //cout<<endl;
    }
    return 0;
}

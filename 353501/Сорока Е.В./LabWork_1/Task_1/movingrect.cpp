#include "movingrect.h"

MovingRect::MovingRect(QWidget *parent)
    : QWidget{parent}
{
    dx=2;
    dy=1;
    rect= QRect();

}
void MovingRect::moveRect(){
    rect.translate(dx,dy);

}
void MovingRect::stop(){
    dx=0;
    dy=0;
}

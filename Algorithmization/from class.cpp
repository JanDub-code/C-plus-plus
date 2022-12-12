#include <iostream>

int main() {
    char znak;
    std::cin>>znak;
    ((znak >"9")&&(znak<"0")||(znak!="*"));
    return 0;
}

mapMatrix->getValue(mapPositionX,mapPositionY)->setNewAppearance(x,y," ");
                            mapPositionX++;
                            int y3 =mapMatrix->getValue(mapPositionX,mapPositionY)->getHeight();
                            //x=1;y=1;
                            for (int i = 0; i < 1; i++) {
                                for (int j = 0; j < y3; j++) {
                                    if (mapMatrix->getValue(mapPositionX,mapPositionY)->getValue(i,j)->getAppearance() =="D") {
                                        int positionX = i;
                                        int positionY = j;
                                        x = positionX + 1;
                                        y = positionY;
                                    }}}
                            joker->setX(x);
                            joker->setY(y);
                            mapMatrix->getValue(mapPositionX,mapPositionY)->setNewAppearance(x,y,"P");
                            break;
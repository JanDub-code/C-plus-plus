#include <iostream>
//using namespace std;
using std::cout;
// do not use using namespace anymore - it is bad practice

namespace gui{
    class Window{
        private:
            int width;
            int height;
    public:
    Window(int width, int height){
        this->width = width;
        this->height = height;
    }
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }

    void printInfo(){
        cout << "Window height: " << width << "x" << height << std::endl;
        cout << "Window width" << width << "x" << height << std::endl;
    }
};
}

int main() {
    gui::Window *w = new gui::Window(100, 100);
    w->printInfo();
    return 0;
}
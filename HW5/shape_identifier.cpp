#include <iostream>

namespace Shapes {
    enum class Shape {
        UNKNOWN = -1,
        CIRCLE,
        SQUARE,
        TRIANGLE
    };

    void printShapes(Shapes::Shape SHAPE_NAME) {
        if (SHAPE_NAME == Shapes::Shape::SQUARE) {
            std::cout << "SQUARE";
        } else if (SHAPE_NAME == Shapes::Shape::CIRCLE) {
            std::cout << "CIRCLE";
        } else if (SHAPE_NAME == Shapes::Shape::TRIANGLE) {
            std::cout << "TRIANGLE";
        } else {
            std::cout << "UNKNOWN";
        }
    }

    Shapes::Shape recognizeShapes(const std::string &SHAPE_INPUT) {
        Shapes::Shape SHAPE_NAME;
        if (SHAPE_INPUT == "CIRCLE") { SHAPE_NAME = Shapes::Shape::CIRCLE; } else if (SHAPE_INPUT == "SQUARE") {
            SHAPE_NAME = Shapes::Shape::SQUARE;
        } else if (SHAPE_INPUT == "TRIANGLE") { SHAPE_NAME = Shapes::Shape::TRIANGLE; } else {
            SHAPE_NAME = Shapes::Shape::UNKNOWN;
        }
        return SHAPE_NAME;
    }
}


int main() {
    std::string SHAPE_NAME;
    std::cout << "Please enter the name of the geomtric shape using capital letters" << std::endl;
    std::cin >> SHAPE_NAME;
    Shapes::printShapes(Shapes::recognizeShapes(SHAPE_NAME));
    return 0;
}

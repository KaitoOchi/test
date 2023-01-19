#include <iostream>
#include <cmath>

struct Vector3D {
    double x, y, z;
};

Vector3D crossProduct(const Vector3D& v1, const Vector3D& v2) {
    Vector3D result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}

int main() {
    Vector3D v1 = { 1, 2, 2 };
    Vector3D v2 = { 2, 1, 4 };
    Vector3D cross = crossProduct(v1, v2);
    std::cout << "(" << cross.x << ", " << cross.y << ", " << cross.z << ")" << std::endl;
    return 0;

    std::cout << "•ÏXŒã!\n";
}
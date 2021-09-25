#include "Vector3.h"
#include <iostream>

int main() {

	Vector3<float> vec1 = Vector3<float>(2.0f, 3.0f, 4.0f);
	Vector3<int> vec2;
	Vector3<double> vec3;

	vec2.Zero();
	vec3.Normalize();

	std::cout << "Vec1-> " << vec1.x << ", " << vec1.y << ", " << vec1.z << std::endl;
	std::cout << "Vec2-> " << vec2.x << ", " << vec2.y << ", " << vec2.z << std::endl;
	std::cout << "Vec3-> " << vec3.x << ", " << vec3.y << ", " << vec3.z << std::endl;

	return 0;
}
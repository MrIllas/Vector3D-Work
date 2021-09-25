#pragma once

#ifndef __VECTOR3_H__
#define __VECTOR3_H__

#include <math.h>

template <typename T>
class Vector3
{
public:

	T x, y, z;

	Vector3<T>() {};
	Vector3<T>(const Vector3& vec) { 
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
	};
	Vector3<T>(T x, T y, T z) {
		this->x = x;
		this->y = y;
		this->z = z;
	};

	void Zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	bool isZero() const {
		return (x == 0 && y == 0 && z == 0);
	}

	T DistanceTo(Vector3 vec) {
		T fx = this->x - vec.x;
		T fy = this->y - vec.y;
		T fz = this->z - vec.z;

		return (T) sqrt((float) (fx*fx) + (fy*fy) + (fz*fz));
	}

	void Normalize() {
		this->x = this->x / this->x;
		this->y = this->y / this->y;
		this->z = this->z / this->z;
	}


	//OPERATORS
	Vector3 operator+(Vector3 &vec) {
		Vector3 toReturn;
		toReturn.x = x + vec.x;
		toReturn.y = y + vec.y;
		toReturn.z = z + vec.z;

		return toReturn;
	};
	Vector3 operator-(Vector3 &vec) {
		Vector3 toReturn;
		toReturn.x = x - vec.x;
		toReturn.y = y - vec.y;
		toReturn.z = z - vec.z;

		return toReturn;
	};
	Vector3 operator+=(Vector3 &vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;

		return this;
	};
	Vector3 operator-=(Vector3 &vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

		return this;
	};
	
	void operator= (Vector3 vec) {
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
	};
	
	bool operator==(Vector3 vec) {
		return (x == vec.x && y == vec.y && z == vec.z);
	};
};

#endif
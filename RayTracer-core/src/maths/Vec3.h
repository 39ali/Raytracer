#pragma once
#include <math.h>
template < typename T>
class Vec3
{
public:
	Vec3(const T& _x, const T& _y, const T& _z) :x(_x), y(_y), z(_z) { };
	Vec3(const T& val) { x = val; y = val; z = val; };
	Vec3() { x = 0; y = 0; z = 0; };

	Vec3<T> operator + (const Vec3<T>&  v)const
	{
		return Vec3<T>(x + v.x, y + v.y, z + v.z);
	};

	Vec3<T> operator -  (const Vec3<T> v)const
	{
		return Vec3<T>(x - v.x, y - v.y, z - v.z);
	}

	Vec3<T> operator * (const Vec3<T> v) const
	{
		return  Vec3<T>(x*v.x, y*v.y, z*v.z);
	}

	Vec3<T> operator * (const T t)const
	{
		return Vec3<T>(x*t, y*t, z*t);
	}

	Vec3<T>& operator *=(const T & t)
	{
		x *= t; y *= t; z *= t;
		return *this;
	}

	Vec3<T> operator /=(const T& t)
	{
		x /= t; y /= t; z /= t;
		return *this;
	}

	friend Vec3<T> operator * (const T& t, const Vec3<T>& v)
	{
		return v*t;
	}

	friend Vec3<T> operator / (const T& t, const Vec3<T>& v)
	{
		return Vec3<T>(t / v.x, t / v.y, t / v.z);
	}



	Vec3<T> operator - ()const
	{
		return Vec3<T>(-x, -y, -z);
	}


	T dot(const Vec3<T>& v)const
	{
		return x*v.x + y*v.y + z*v.z;
	};
	Vec3 crossProduct(const Vec3<T> &v) const
	{
		return Vec3<T>(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
	}

	T length()const
	{
		return  sqrt(x*x + y*y + z*z);
	}

	Vec3& normalize()
	{
		T n = x*x + y*y + z*z;
		if (n > 0)
		{
			T q = 1 / sqrt(n);
			x *= q; y *= q; z *= q;
		}
		return *this;
	}



private:
	T x, y, z;

};

typedef Vec3<float> Vec3f;
typedef Vec3<double> Vec3d;
typedef Vec3<int> Vec3i;
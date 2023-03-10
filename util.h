#ifndef __UTIL_H__
#define __UTIL_H__

#include "geometry.h"

class Util {

public:
	static char* convertWStringToCharPtr(_In_ std::wstring input);
	static Vec2f linearInterpolate(Vec2f v0, Vec2f v1, float t);
	static Vec3f lerp(const Vec3f& start, const Vec3f& end, float t);
	static Vec3f interpolateVectors(const Vec3f& a, const Vec3f& b, const Vec3f& c, float t);
};

#endif //__UTIL_H__

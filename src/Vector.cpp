//
//  Vector.cpp
//  3DRasEngine
//
//  Created by 于京平 on 2017/5/29.
//  Copyright © 2017年 于京平. All rights reserved.
//

#include "Vector.hpp"

Vector4 :: Vector4 (float xx, float yy, float zz, float ww)
{
    x = xx;
    y = yy;
    z = zz;
    w = ww;
}

Vector4 Vector4 :: operator - () const
{
    return {-x, -y, -z, -w};
}

Vector4 Vector4 :: operator + (const Vector4 &rhs) const
{
    return {x + rhs.x, y + rhs.y, z + rhs.z, w + rhs.w};
}

Vector4 Vector4 :: operator - (const Vector4 &rhs) const
{
    return {x - rhs.x, y - rhs.y, z - rhs.z, w - rhs.w};
}

Vector4 Vector4 :: operator * (const Vector4 &rhs) const
{
    return {x * rhs.x, y * rhs.y, z * rhs.z, w * rhs.w};
}

Vector4 Vector4 :: operator * (float f) const
{
    return {x * f, y * f, z * f, w * f};
}

Vector4 Vector4 :: Cross (const Vector4 &rhs) const
{
    return {y * rhs.z - z * rhs.y, z * rhs.x - x * rhs.z, x * rhs.y - y * rhs.x};
}

float Vector4 :: Dot (const Vector4 &rhs) const
{
    return x * rhs.x + y * rhs.y + z * rhs.z;
}

Vector4 Vector4 :: Normalize () const
{
    float inv = 1.0f / sqrtf (x * x + y * y + z * z);
    return {x * inv, y * inv, z * inv};
}

#pragma once

#include <Shaders/Common/GlobalConstants.h>
#include "SampleConstantBuffer.h"

#if XII_ENABLED(PLATFORM_SHADER)

struct VS_IN
{
  float3 Position : POSITION;
  float2 TexCoord0 : TEXCOORD0;
};

struct VS_OUT
{
  float4 Position : SV_Position;
  float2 TexCoord0 : TEXCOORD0;
};

typedef VS_OUT PS_IN;

#endif

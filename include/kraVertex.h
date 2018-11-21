#pragma once
#include "kraVector4.h"

namespace kraEngineSDK {
  
  struct Vertex {

    Vertex() {
      Pos.w = 1.0f;
    }
    Vertex(Vector3 vert) 
    {
      Pos.x = vert.x;
      Pos.y = vert.y;
      Pos.z = vert.z;
      Pos.w = 1.0f;

    }
      
    Vector4 Pos;
    Vector2 Tex;
    /*Vector3 m_normal;
    Vector4 m_color;
    float m_u;
    float m_v;*/
  };

}
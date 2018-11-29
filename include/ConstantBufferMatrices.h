#pragma once
#include "kraPrerequisitesGFX.h"
#include "kraMatrix4.h"

namespace kraEngineSDK {
  
  struct CBNeverChanges {
    Matrix4 m_view;
  };

  struct CBChangeOnResize {
    Matrix4 m_projection;

  };

  struct CBChangesEveryFrame {
    Matrix4 m_world;
    Vector4 m_vMeshColor;
  };
}
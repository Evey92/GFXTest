#pragma once
#include "kraPrerequisitesGFX.h"
#include "kraD3D11GraphicsBuffer.h"

namespace kraEngineSDK {
  class  ShaderResourceView
  {
  public:
    ShaderResourceView() = default;
    ~ShaderResourceView() {};

    HRESULT
    createShaderResourceViewFromFie(ID3D11Device* pDevice, const wchar_t* fileName);
    HRESULT
    createShaderResourceView(ID3D11Device* pDevice, const wchar_t* fileName);

    ID3D11ShaderResourceView* m_pTextureRV;
  };
}

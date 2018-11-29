#include "kraMatrix4.h"

namespace kraEngineSDK {

  Matrix4
  Matrix4::operator+(const float& val) {
    Matrix4 newMat;

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        newMat.m[i][j] = m[i][j] + val;
      }
    }

    return newMat;
  }

  Matrix4
    Matrix4::operator-(const float& val) {
    Matrix4 newMat;

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        newMat.m[i][j] = m[i][j] - val;
      }
    }

    return newMat;
  }

  Matrix4
    Matrix4::operator*(const float& val) {
    Matrix4 newMat;

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        newMat.m[i][j] = m[i][j] * val;
      }
    }

    return newMat;
  }

  Matrix4
  Matrix4::operator*(const Matrix4& Mat) {
    Matrix4 newMat;

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        newMat.m[i][j] = m[i][j] * Mat.m[i][j];
      }
    }

    return newMat;
  }

  //Matrix4
  //Matrix4::operator*(const Vector4& Vec) {
  //  Matrix4 newMat;
  //  for (uint32 i = 0; i < 4; ++i) {
  //    for (uint32 j = 0; j < 4; ++j) {
  //      //newMat.m[i][j] = m[i][j] * Vec;
  //    }
  //  }
  //  return newMat;
  //}

  Matrix4
  Matrix4::operator+=(const Matrix4& Mat) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] += Mat.m[i][j];
      }
    }

    return *this;
  }

  Matrix4
  Matrix4::operator-=(const Matrix4& Mat) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] -= Mat.m[i][j];
      }
    }

    return *this;
  }

  Matrix4
  Matrix4::operator*=(const Matrix4& Mat) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] *= Mat.m[i][j];
      }
    }

    return *this;
  }

  Matrix4
  Matrix4:: operator+=(float val) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] += val;
      }
    }

    return *this;
  }

  Matrix4
  Matrix4::operator-=(float val) {


    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] -= val;
      }
    }

    return *this;
  }

  Matrix4
  Matrix4::operator*=(float val) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] *= val;
      }
    }

    return *this;
  }

  Matrix4
  Matrix4::operator/=(float val) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] /= val;
      }
    }

    return *this;
  }

  Matrix4
  Matrix4::operator=(const Matrix4& Mat) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        m[i][j] = Mat.m[i][j];
      }
    }

    return *this;
  }

  bool
  Matrix4::operator==(const Matrix4& Mat) {

    for (uint32 i = 0; i < 4; ++i) {
      for (uint32 j = 0; j < 4; ++j) {
        if (m[i][j] == Mat.m[i][j]) {
          return true;
        }
      }
    }
    return false;
  }

  bool
    Matrix4::operator!=(const Matrix4& Mat) {
    return !(*this == Mat);
  }
}
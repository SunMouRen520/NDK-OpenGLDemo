//
// Created by 薄酒醉倾杯 on 2/22/21.
//

#ifndef NDKOPENGLDEMO_TEXTUREMAPSAMPLE_H
#define NDKOPENGLDEMO_TEXTUREMAPSAMPLE_H

#include "GLSampleBase.h"
#include "../util/ImageDef.h"

class TextureMapSample : public GLSampleBase {
public:
    TextureMapSample();

    virtual ~TextureMapSample();

    void LoadImage(NativeImage *pImage);

    virtual void Init();

    virtual void Draw(int screenW, int screenH);

    virtual void Destroy();

private:
    GLuint m_TextureId;
    GLint m_SampleLoc;
    NativeImage m_RenderImage;
};


#endif //NDKOPENGLDEMO_TEXTUREMAPSAMPLE_H

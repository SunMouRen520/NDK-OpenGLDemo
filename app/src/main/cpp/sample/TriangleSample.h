//
// Created by 薄酒醉倾杯 on 2/8/21.
//

#ifndef NDKOPENGLDEMO_TRIANGLESAMPLE_H
#define NDKOPENGLDEMO_TRIANGLESAMPLE_H

#include "GLSampleBase.h"

class TriangleSample : public GLSampleBase {
public:
    TriangleSample();

    virtual ~TriangleSample();

    virtual void LoadImage(NativeImage *pImage);

    virtual void Init();

    virtual void Draw(int screenW, int screenH);

    virtual void Destroy();

};


#endif //NDKOPENGLDEMO_TRIANGLESAMPLE_H

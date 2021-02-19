//
// Created by 薄酒醉倾杯 on 2/8/21.
//

#ifndef NDKOPENGLDEMO_EGLRENDER_H
#define NDKOPENGLDEMO_EGLRENDER_H
#include "stdint.h"
#include <GLES3/gl3.h>
#include <ImageDef.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#define EGL_FEATURE_NUM 7

class EGLRender {
public:
    EGLRender();
    ~EGLRender();

    void Init();

    int CreateGlesEnv();

    void SetImageData(uint8_t *pData, int width, int height);

    void SetIntParams(int paramType, int param);

    void Draw();

    void DestroyGlesEnv();

    void UnInit();

    static EGLRender* GetInstance() {

    }

private:
    static EGLRender *m_Instance;
    GLuint m_ImageTextureId;
    GLuint m_FboTextureId;
    GLuint m_FboId;
    GLuint m_VaoIds[1];
    GLuint m_VboIds[3];
    GLint  m_SamplerLoc;
    GLint  m_TexSizeLoc;
    NativeImage m_RenderImage;
    GLuint m_ProgramObj;
    GLuint m_VertexShader;
    GLuint m_FragmentShader;

    EGLConfig  m_eglConf;
    EGLSurface m_eglSurface;
    EGLContext m_eglCtx;
    EGLDisplay m_eglDisplay;
    bool       m_IsGLContextReady;
    const char*m_fShaderStrs[EGL_FEATURE_NUM];
    int        m_ShaderIndex;
};


#endif //NDKOPENGLDEMO_EGLRENDER_H

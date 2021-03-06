#ifndef TEXTURE_H
#define TEXTURE_H

#include <QOpenGLFunctions>
#include <QOpenGLTexture>

class Texture
{
public:
    Texture();
    Texture(const QString filePath, bool mirroredX, bool mirroredY);
    ~Texture();
    void bind();
    void unbind();
    void setMiniFilter(QOpenGLTexture::Filter type);
    void setMagFilter(QOpenGLTexture::Filter type);
    void setWrapMode(QOpenGLTexture::WrapMode mode);
    QOpenGLTexture* getTexture();

protected:

private:
    QOpenGLTexture *texture = nullptr;
};

#endif // TEXTURE_H

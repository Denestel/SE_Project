#ifndef MATERIALS_H
#define MATERIALS_H

#include "model.h"
#include "shader.h"
#include "texture.h"
#include "vao.h"

class Materials
{
public:
    Materials();
    ~Materials();

    unsigned int addVAO(VAO *vao);
    void removeVAO(int index);
    VAO* getVAO(unsigned int index);

    unsigned int addShader(Shader *shader);
    void removeShader(int index);
    Shader* getShader(unsigned int index);

    unsigned int addTexture(Texture *texture);
    void removeTexture(int index);
    Texture* getTexture(unsigned int index);

protected:

private:
    vector<VAO*> vaos;
    unsigned int numOfVAOs;

    vector<Shader*> shaders;
    unsigned int numOfShaders;

    vector<Texture*> textures;
    unsigned int numOfTextures;
};

#endif // MATERIALS_H

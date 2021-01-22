//
// Created by jack on 30/12/2020.
//

#ifndef OPENGLSANDBOX_SHADERCOMPONENT_H
#define OPENGLSANDBOX_SHADERCOMPONENT_H

#include <graphics/Shader.h>

struct ShaderComponent
{
    const char *vert_path;
    const char *frag_path;
    Shader* shader;
};


#endif //OPENGLSANDBOX_SHADERCOMPONENT_H

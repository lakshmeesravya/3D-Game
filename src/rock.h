#include "main.h"

#ifndef ROCK_H
#define ROCK_H


class Rock {
public:
    Rock() {}
    Rock(float x, float y, float z);
    glm::vec3 position;
    float rotation;
    int flag;
    void draw(glm::mat4 VP);
    void set_position(float x, float y, float z);
    bounding_box_t bounding_box();
private:
    VAO *object;
};

#endif // BALL_H

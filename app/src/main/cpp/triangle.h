//
// Created by simonppg on 19/03/18.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef struct _Triangle Triangle;
Triangle* Triangle_new(const char* vertexSource, const char * fragmentSource);
void Triangle_draw(Triangle *t);
void Triangle_update(Triangle *t);

#endif //TRIANGLE_H
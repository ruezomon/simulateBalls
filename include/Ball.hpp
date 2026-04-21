#pragma once

// note to myself:
// coords (0/0) will be in the top left corner
// regarding velocity:
// +vx = right; -vx = left
// +vy = down; -vy = up

struct Ball {
    int x;
    int y;
    int* velocity;
    inline Ball(int x = 0, int y = 0) : x {x}, y {y} {
        this->velocity = new int[2] {0, 0};
    }
    inline void update(int gravitationalPullForce) {
        x = x < gravitationalPullForce ? x + velocity[0] : gravitationalPullForce;
        y += velocity[1];
    }
};
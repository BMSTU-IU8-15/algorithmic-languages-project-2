#pragma once

#include <cstddef>
#include <string>
#include "direction.h"

using std::string;

namespace battleships {

    struct Coordinate {
        /* signed type is used to allow negative number comparisons */
        int x, y;

        inline Coordinate(const int &x, const int &y) : x(x), y(y) {}

        void move(const Direction &direction, const int &delta) {
            switch (direction) {
                case RIGHT: {
                    x += delta;
                    break;
                }
                case DOWN: {
                    y -= delta;
                    break;
                }
                case LEFT: {
                    x -= delta;
                    break;
                }
                case UP: {
                    y += delta;
                    break;
                }
                default:throw invalid_argument(&"Unknown direction"[direction]);
            }
        }

        [[nodiscard]] Coordinate move(const Direction &direction, const int &delta) const {
            switch (direction) {
                case RIGHT: return Coordinate(x + delta, y);
                case DOWN: return Coordinate(x, y - delta);
                case LEFT: return Coordinate(x - delta, y);
                case UP: return Coordinate(x, y + delta);
                default:throw invalid_argument(&"Unknown direction"[direction]);
            }
        }

        void move(const int &deltaX, const int &deltaY) {
            this->x += deltaX;
            this->y += deltaX;
        }

        [[nodiscard]] Coordinate move(const int &deltaX, const int &deltaY) const {
            return Coordinate(x + deltaX, y + deltaY);
        }

        bool operator==(const Coordinate &other) const {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Coordinate &other) const {
            return x != other.x || y != other.y;
        }

        bool operator>(const Coordinate &other) const {
            return x == other.x ? y > other.y : x > other.x;
        }

        bool operator<(const Coordinate &other) const {
            return x == other.x ? y < other.y : x < other.x;
        }

        [[nodiscard]] string to_string() const {
            return char(x + 'A') + std::to_string(y);
        }
    };
}



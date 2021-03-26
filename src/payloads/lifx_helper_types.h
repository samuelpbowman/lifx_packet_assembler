#ifndef LIFX_HELPER_TYPES_H
#define LIFX_HELPER_TYPES_H

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

enum lifx_services { udp = 1,
        reserved1 = 2,
        reserved2 = 3,
        reserved3 = 4,
        reserved4 = 5 };

enum lifx_direction { right, left };

struct HSBK {
    uint16_t hue;
    uint16_t saturation;
    uint16_t brightness;
    uint16_t kelvin;
};

#ifdef __cplusplus
}
#endif
#endif

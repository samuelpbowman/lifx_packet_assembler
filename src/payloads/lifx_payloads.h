#ifndef LIFX_PAYLOADS_H
#define LIFX_PAYLOADS_H

#include "lifx_helper_types.h"
#ifdef __cplusplus
extern "C" {
#endif

/* Query payloads */
struct echo_payload {
    uint64_t echoing;
};

struct get_color_zones_payload {
    uint8_t start_index;
    uint8_t end_index;
};

/* Change payloads */
struct set_color_payload {
    uint8_t reserved6;
    struct HSBK color;
    uint32_t duration;
};

struct set_light_power_payload {
    uint16_t level;
    uint32_t duration;
};

/* Response payloads */
struct state_service_payload {
    enum lifx_services service;
    uint32_t port;
};

struct state_host_info_payload {
    float signal;
    uint32_t tx;
    uint32_t rx;
    uint16_t reserved6;
};

struct state_host_firmware_payload {
    uint64_t build;
    uint64_t reserved6;
    uint16_t version_minor;
    uint16_t version_major;
};

struct state_wifi_info_payload {
    float signal;
    uint32_t tx;
    uint32_t rx;
    uint16_t reserved6;
};

struct state_wifi_firmware_payload {
    uint64_t build;
    uint64_t reserved6;
    uint16_t version_minor;
    uint16_t version_major;
};

struct state_power_payload {
    uint16_t level;
};

struct state_version_payload {
    uint32_t vendor;
    uint32_t product;
    uint32_t reserved6;
};

struct state_info_payload {
    uint64_t time;
    uint64_t uptime;
    uint64_t downtime;
};

#ifdef __cplusplus
}
#endif
#endif

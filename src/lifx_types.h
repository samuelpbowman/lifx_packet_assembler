#ifndef LIFX_TYPES_H
#define LIFX_TYPES_H

#include "payloads/lifx_payloads.h"
#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push, 1)
struct lifx_packet_header {
    /* frame header */
    uint16_t size;
    uint16_t protocol:12;
    uint8_t  addressable:1;
    uint8_t  tagged:1;
    uint8_t  origin:2;
    uint32_t source;
    /* frame address */
    uint8_t  target[8];
    uint8_t  reserved[6];
    uint8_t  res_required:1;
    uint8_t  ack_required:1;
    uint8_t  :6;
    uint8_t  sequence;
    /* protocol header */
    uint64_t :64;
    uint16_t type:16;
    uint16_t :16;
};
#pragma pack(pop)

#ifdef __cplusplus
}
#endif
#endif

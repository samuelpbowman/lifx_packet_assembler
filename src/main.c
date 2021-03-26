#include <stdio.h>
#include "lifx_packets.h"

int main() {
    int size = sizeof(struct lifx_packet_header);
    printf("Hello, %d\n", size);
    return 0;
}

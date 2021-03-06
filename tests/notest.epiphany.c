#include <stdint.h>

#define SKIP 77
struct status {
    uint32_t done;
    uint32_t _pad1;
    uint32_t returncode;
    uint32_t _pad2;
} __attribute__((packed));

volatile struct status *epiphany_status = (struct status *) 0x8f200000;
volatile char *epiphany_results = (char *) 0x8f300000;

int main(int argc, char *argv[])
{
    epiphany_status->returncode = SKIP;
    epiphany_status->done = 1;

    return SKIP;
}

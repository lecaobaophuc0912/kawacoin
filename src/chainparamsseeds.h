#ifndef RAVEN_CHAINPARAMSSEEDS_H
#define RAVEN_CHAINPARAMSSEEDS_H
/**
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x5e,0x82,0x12,0xfa}, 14000},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x8a,0xc9,0x15,0xc7}, 14000}
};


static SeedSpec6 pnSeed6_test[] = {

};
#endif // RAVEN_CHAINPARAMSSEEDS_H

// RTPG_8539: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int lo4 = 34;
    int b63 = 94;
    int z86 = 4;
    int cnt58 = 35704;
    int acc79 = 5391;
    int res80 = 1792;
    int *ptr = &lo4;
    int i;
    for (i = 0; i < 16; i++) {
        acc79 = xn[i];
        acc79 = acc79 - 47;
        acc79 = b63 + acc79;
        lo4 = acc79 & z86;
        lo4 = z86 + res80;
        acc79 = z86 - 32840;
        *ptr = *ptr + 3;
        if (res80 < 95) {
        lo4 = acc79 - 1;
        }
        yo[i] = lo4;
    }
}
int main() { test_func(); return 0; }


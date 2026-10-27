// RTPG_3990: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int v32 = 3;
    int tmp28 = 38;
    int z29 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        tmp28 = xn[i];
        z29 = tmp28 & z29;
        tmp28 = z29 / v32;
        v32 = tmp28 - 9;
        z29 = z29 + 10633;
        tmp28 = v32 + z29;
        tmp28 = v32;
        z29 = v32 - 50095;
        if (z29 != 62) {
        z29 = z29 + 13384;
        }
        yo[i] = z29;
    }
}
int main() { test_func(); return 0; }


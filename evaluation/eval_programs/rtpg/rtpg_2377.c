// RTPG_2377: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int cur18 = 1;
    int b80 = 7;
    int z1 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        b80 = xn[i];
        cur18 = z1 - 41;
        z1 = z1 + 1;
        cur18 = z1 - cur18;
        yo[i] = cur18;
    }
}
int main() { test_func(); return 0; }


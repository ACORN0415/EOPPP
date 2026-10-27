// RTPG_1472: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int out89 = 95;
    int c2 = 10;
    int cur96 = 30;
    int y63 = 31;
    int sum14 = 64;
    int z13 = 91;
    int *ptr = &out89;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur96 = xn[i];
        z13 = sum14 * -19;
        cur96 = out89 + 7;
        c2 = c2 - out89;
        sum14 = cur96 - z13;
        *ptr = *ptr + 4;
        yo[i] = out89;
    }
}
int main() { test_func(); return 0; }


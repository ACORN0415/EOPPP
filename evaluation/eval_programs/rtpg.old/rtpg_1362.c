// RTPG_1362: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int x22 = 56;
    int prev28 = 6;
    int z14 = 40112;
    int c44 = 57988;
    int cur54 = 42498;
    int c5 = 26;
    int v82 = 19;
    int hi62 = 48;
    int i;
    for (i = 0; i < 16; i++) {
        hi62 = xn[i];
        c44 = c44 - 2;
        x22 = z14;
        v82 = c44 + x22;
        prev28 = prev28 - c44;
        yo[i] = cur54;
    }
}
int main() { test_func(); return 0; }


// RTPG_2724: vars=8 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int c85 = 13;
    int acc43 = 229;
    int v2 = 8;
    int sum75 = 38;
    int cnt53 = 0;
    int v16 = 92;
    int z78 = 35;
    int b52 = 23252;
    int i;
    for (i = 0; i < 64; i++) {
        v2 = xn[i];
        acc43 = sum75 - b52;
        cnt53 = acc43 - c85;
        c85 = sum75 + v16;
        yo[i] = c85;
    }
}
int main() { test_func(); return 0; }


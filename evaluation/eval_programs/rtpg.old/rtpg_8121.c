// RTPG_8121: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int prev12 = 2;
    int v4 = 40692;
    int res81 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        v4 = xn[i];
        v4 = res81 - -1;
        prev12 = v4 - prev12;
        yo[i] = v4;
    }
}
int main() { test_func(); return 0; }


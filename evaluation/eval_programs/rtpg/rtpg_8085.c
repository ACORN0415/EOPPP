// RTPG_8085: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int x41 = 1;
    int cur33 = 20;
    int v6 = -45;
    int z96 = 11;
    int i;
    for (i = 0; i < 64; i++) {
        x41 = xn[i];
        z96 = x41 + cur33;
        x41 = x41 - 10;
        v6 = v6 - 3;
        if (v6 >= 20) {
        v6 = x41;
        }
        yo[i] = v6;
    }
}
int main() { test_func(); return 0; }


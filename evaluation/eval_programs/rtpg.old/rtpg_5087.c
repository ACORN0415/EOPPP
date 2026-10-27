// RTPG_5087: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int v21 = 3;
    int y76 = 36;
    int x90 = -14;
    int out1 = 18;
    int cur78 = 65071;
    int y91 = 23628;
    int i;
    for (i = 0; i < 64; i++) {
        x90 = xn[i];
        cur78 = y91 + y76;
        v21 = v21 + out1;
        v21 = out1 - out1;
        yo[i] = y76;
    }
}
int main() { test_func(); return 0; }


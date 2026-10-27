// RTPG_5148: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int y91 = 3;
    int x90 = 36;
    int v21 = -14;
    int cur78 = 18;
    int y76 = 65071;
    int out1 = 23628;
    int i;
    for (i = 0; i < 64; i++) {
        v21 = xn[i];
        y76 = out1 + x90;
        y91 = y91 + cur78;
        y91 = cur78 - cur78;
        yo[i] = x90;
    }
}
int main() { test_func(); return 0; }


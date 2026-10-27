// RTPG_3327: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int acc52 = -12;
    int v41 = 33;
    int b72 = -44;
    int i;
    for (i = 0; i < 16; i++) {
        v41 = xn[i];
        acc52 = b72 - acc52;
        v41 = b72 + 3;
        acc52 = acc52 + v41;
        acc52 = acc52 + v41;
        b72 = acc52;
        v41 = acc52 + v41;
        b72 = b72 - acc52;
        yo[i] = acc52;
    }
done:
    acc52 = 0;
}
int main() { test_func(); return 0; }


// RTPG_3337: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int acc52 = -12;
    int b72 = 33;
    int v41 = -44;
    int i;
    for (i = 0; i < 16; i++) {
        b72 = xn[i];
        acc52 = v41 - acc52;
        b72 = v41 + 3;
        acc52 = acc52 + b72;
        acc52 = acc52 + b72;
        v41 = acc52;
        b72 = acc52 + b72;
        v41 = v41 - acc52;
        yo[i] = acc52;
    }
}
int main() { test_func(); return 0; }


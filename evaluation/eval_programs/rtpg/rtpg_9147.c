// RTPG_9147: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int acc40 = 4;
    int a84 = 9;
    int prev40 = 4;
    int acc53 = -13;
    int i;
    for (i = 0; i < 64; i++) {
        a84 = xn[i];
        prev40 = acc40 - prev40;
        prev40 = acc40 + a84;
        a84 = acc53 + 70;
        yo[i] = acc53;
    }
}
int main() { test_func(); return 0; }


// RTPG_9943: vars=6 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int a71 = 5;
    int v48 = 6;
    int dat19 = 5;
    int dat11 = 19534;
    int dat54 = 20350;
    int lo98 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        dat54 = xn[i];
        a71 = dat11 + dat19;
        a71 = a71 + 2;
        dat54 = dat54 + v48;
        dat11 = a71 + dat11;
        a71 = a71 + dat11;
        lo98 = dat54 - lo98;
        dat19 = dat19 + 4;
        dat11 = dat54 - v48;
        lo98 = lo98 - 2;
        v48 = a71 - dat11;
        a71 = dat19 - dat54;
        yo[i] = dat11;
    }
}
int main() { test_func(); return 0; }


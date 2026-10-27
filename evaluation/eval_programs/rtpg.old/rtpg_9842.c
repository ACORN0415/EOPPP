// RTPG_9842: vars=8 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int a87 = 44;
    int prev0 = -45;
    int c31 = 7;
    double sum24 = 64.16;
    float dat50 = 31.71;
    int z28 = 62;
    int z82 = 41531;
    double cur86 = 40.46;
    int i;
    for (i = 0; i < 16; i++) {
        z28 = xn[i];
        cur86 = dat50 - a87;
        z28 = c31 + 44240;
        z28 = sum24 - 81;
        z28 = a87 + prev0;
        z82 = c31 - sum24;
        sum24 = sum24 - z82;
        c31 = c31 - 4;
        dat50 = dat50 - 4;
        cur86 = c31 + c31;
        a87 = a87 - 3;
        z82 = c31 + dat50;
        yo[i] = sum24;
    }
}
int main() { test_func(); return 0; }


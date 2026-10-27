// RTPG_2338: vars=10 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int tmp9 = 40;
    int dat86 = -44;
    int hi9 = 35541;
    int acc68 = 15;
    int hi20 = 12;
    int tmp91 = 42;
    int b74 = 1;
    int dat4 = 46;
    int acc11 = 6;
    int out2 = 62734;
    int i;
    for (i = 0; i < 16; i++) {
        dat86 = xn[i];
        b74 = acc68 + tmp91;
        b74 = hi9 - acc68;
        b74 = b74 - tmp9;
        tmp91 = dat4;
        acc68 = tmp9 + hi9;
        yo[i] = tmp91;
    }
}
int main() { test_func(); return 0; }


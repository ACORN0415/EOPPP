// RTPG_9605: vars=3 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int dat62 = 43516;
    int y80 = 10;
    int dat19 = 60;
    int i;
    for (i = 0; i < 16; i++) {
        dat19 = xn[i];
        dat19 = y80 + y80;
        y80 = y80 - dat19;
        y80 = y80 - 4;
        dat62 = dat62 + 2;
        dat62 = dat62 + 7;
        y80 = dat62 - dat19;
        dat62 = dat19 - 75;
        dat19 = dat19 + -23;
        dat62 = dat62 - y80;
        dat62 = dat19 - y80;
        yo[i] = dat19;
    }
}
int main() { test_func(); return 0; }


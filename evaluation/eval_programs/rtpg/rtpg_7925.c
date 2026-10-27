// RTPG_7925: vars=4 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int dat24 = 27;
    int dat61 = 2;
    int b70 = 7;
    int dat13 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        dat24 = xn[i];
        b70 = dat13 + b70;
        dat61 = dat61 - 4;
        dat61 = dat61;
        b70 = b70 + 5;
        dat24 = dat13 + dat24;
        dat61 = dat13 - dat24;
        b70 = b70 + dat13;
        yo[i] = dat24;
    }
}
int main() { test_func(); return 0; }


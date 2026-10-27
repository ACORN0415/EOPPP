// RTPG_4827: vars=6 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int cur14 = 23;
    int a70 = 14005;
    int res71 = 20;
    int y88 = 36366;
    int tmp66 = 13;
    int c36 = 27;
    int i;
    for (i = 0; i < 32; i++) {
        c36 = xn[i];
        c36 = c36 - 2;
        cur14 = tmp66;
        res71 = c36 - c36;
        tmp66 = c36 + a70;
        res71 = cur14 - c36;
        tmp66 = a70;
        cur14 = a70 - a70;
        tmp66 = c36;
        a70 = a70 - 3;
        y88 = c36;
        y88 = res71 + tmp66;
        c36 = cur14 - res71;
        yo[i] = cur14;
    }
}
int main() { test_func(); return 0; }


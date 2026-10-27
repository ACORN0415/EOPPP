// RTPG_4503: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int y71 = 10504;
    int x90 = 10;
    int y42 = -25;
    int b91 = 23;
    int cur47 = 30;
    int i;
    for (i = 0; i < 64; i++) {
        cur47 = xn[i];
        y42 = y42 + y71;
        y71 = x90;
        y42 = y42 - 1;
        x90 = b91 + y71;
        yo[i] = x90;
    }
}
int main() { test_func(); return 0; }


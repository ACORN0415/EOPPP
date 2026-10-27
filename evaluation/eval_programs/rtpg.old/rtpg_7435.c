// RTPG_7435: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int x22 = 57427;
    int a49 = 33;
    int val44 = -24;
    int hi30 = 7;
    int y42 = 9003;
    int x11 = 31;
    int v88 = 1;
    int i;
    for (i = 0; i < 16; i++) {
        x22 = xn[i];
        x11 = x22;
        y42 = y42 - 2;
        v88 = a49 - y42;
        x22 = y42;
        yo[i] = x22;
    }
}
int main() { test_func(); return 0; }


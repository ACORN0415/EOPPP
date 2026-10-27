// RTPG_6727: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int dat82 = 62358;
    int cur43 = 74;
    int a38 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        dat82 = xn[i];
        a38 = dat82 - a38;
        cur43 = cur43 - 1;
        yo[i] = a38;
    }
}
int main() { test_func(); return 0; }


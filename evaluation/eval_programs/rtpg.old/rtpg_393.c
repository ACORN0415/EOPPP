// RTPG_393: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    double a63 = 56.67;
    int cnt6 = 14;
    int a81 = 2;
    int val55 = -1;
    int i;
    for (i = 0; i < 32; i++) {
        a81 = xn[i];
        val55 = a81 + 6;
        cnt6 = val55 + 1;
        a63 = a63 & a81;
        a81 = a81 ^ val55;
        yo[i] = a81;
    }
}
int main() { test_func(); return 0; }


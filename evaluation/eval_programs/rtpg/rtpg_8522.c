// RTPG_8522: vars=5 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int x41 = 8539;
    float val20 = 82.77;
    int y66 = 9;
    float prev88 = 56.23;
    int y38 = -12;
    int i;
    for (i = 0; i < 32; i++) {
        prev88 = xn[i];
        y66 = y66 - 5;
        val20 = prev88 + y38;
        val20 = y66 + y38;
        x41 = y38 - y38;
        y66 = prev88;
        x41 = prev88 + 33;
        y38 = y38 - 1;
        x41 = x41 - 44;
        y38 = prev88 - y38;
        y38 = prev88 + prev88;
        yo[i] = prev88;
    }
}
int main() { test_func(); return 0; }


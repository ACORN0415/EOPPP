// RTPG_4521: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int val65 = 46619;
    int a63 = 1;
    int hi83 = 6;
    int b41 = 19;
    int cur4 = -38;
    int i;
    for (i = 0; i < 32; i++) {
        hi83 = xn[i];
        hi83 = hi83 - val65;
        a63 = a63 + 4;
        hi83 = a63 + 7;
        val65 = val65 - 3;
        yo[i] = val65;
    }
}
int main() { test_func(); return 0; }


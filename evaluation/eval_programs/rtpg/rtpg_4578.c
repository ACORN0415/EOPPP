// RTPG_4578: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int a63 = 46619;
    int b41 = 1;
    int hi83 = 6;
    int val65 = 19;
    int cur4 = -38;
    int i;
    for (i = 0; i < 32; i++) {
        hi83 = xn[i];
        hi83 = hi83 - a63;
        b41 = b41 + 4;
        hi83 = b41 + 7;
        a63 = a63 - 3;
        yo[i] = a63;
    }
}
int main() { test_func(); return 0; }


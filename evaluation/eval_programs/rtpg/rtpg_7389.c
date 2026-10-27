// RTPG_7389: vars=4 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int tmp7 = 33;
    int b9 = 42;
    int res41 = 3589;
    int cur51 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        cur51 = xn[i];
        tmp7 = cur51 + 55948;
        tmp7 = cur51 + tmp7;
        cur51 = cur51 + 1;
        tmp7 = b9 + res41;
        b9 = cur51 - tmp7;
        res41 = tmp7;
        b9 = b9 - 3;
        res41 = tmp7;
        tmp7 = tmp7 + b9;
        b9 = cur51 - tmp7;
        if (b9 != 32) {
        res41 = b9 + tmp7;
        }
        yo[i] = tmp7;
    }
}
int main() { test_func(); return 0; }


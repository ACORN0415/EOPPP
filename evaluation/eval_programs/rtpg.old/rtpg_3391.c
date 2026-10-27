// RTPG_3391: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y7 = 0;
    int b42 = 45;
    int c8 = 38;
    int i;
    for (i = 0; i < 16; i++) {
        b42 = xn[i];
        b42 = b42 - 2;
        b42 = y7 - b42;
        b42 = b42;
        y7 = c8 + b42;
        b42 = y7 + 2;
        if (c8 <= 47) {
        b42 = b42;
        }
        yo[i] = b42;
    }
}
int main() { test_func(); return 0; }


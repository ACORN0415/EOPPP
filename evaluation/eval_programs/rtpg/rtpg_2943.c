// RTPG_2943: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int res87 = 33;
    int sum90 = 6;
    int z69 = 15;
    int i;
    for (i = 0; i < 16; i++) {
        res87 = xn[i];
        z69 = z69 + 13;
        z69 = z69 - 1;
        if (res87 > -32) {
        z69 = sum90 - z69;
        }
        yo[i] = sum90;
    }
}
int main() { test_func(); return 0; }


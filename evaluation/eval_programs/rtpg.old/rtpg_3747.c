// RTPG_3747: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int v37 = 64;
    int sum34 = 89;
    double b83 = 42.10;
    int dat5 = 22527;
    int prev75 = 33416;
    int i;
    for (i = 0; i < 16; i++) {
        dat5 = xn[i];
        b83 = v37 + 32323;
        b83 = b83 - 1;
        dat5 = v37 - prev75;
        dat5 = dat5 + 4;
        b83 = sum34 + prev75;
        if (b83 < 41) {
        sum34 = sum34 - dat5;
        }
        yo[i] = prev75;
    }
}
int main() { test_func(); return 0; }


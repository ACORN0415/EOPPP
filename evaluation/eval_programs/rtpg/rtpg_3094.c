// RTPG_3094: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    float a51 = 17.42;
    float res43 = 36.63;
    int tmp84 = -4;
    int i;
    for (i = 0; i < 16; i++) {
        a51 = xn[i];
        res43 = res43 + 1;
        a51 = tmp84 + a51;
        res43 = tmp84 + 32569;
        res43 = tmp84 + 41;
        a51 = tmp84 - a51;
        res43 = tmp84 + 30282;
        a51 = tmp84 - res43;
        yo[i] = res43;
    }
}
int main() { test_func(); return 0; }


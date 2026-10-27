// RTPG_1199: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int tmp6 = 83;
    int hi67 = 5;
    int res14 = -5;
    float tmp68 = 79.29;
    float out88 = 40.57;
    int i;
    for (i = 0; i < 32; i++) {
        res14 = xn[i];
        tmp6 = tmp6 - 5;
        hi67 = tmp68 - 9;
        hi67 = tmp6 - res14;
        out88 = out88 - tmp68;
        res14 = tmp6;
        res14 = tmp68 - res14;
        yo[i] = out88;
    }
}
int main() { test_func(); return 0; }


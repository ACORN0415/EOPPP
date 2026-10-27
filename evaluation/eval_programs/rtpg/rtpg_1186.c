// RTPG_1186: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int hi67 = 83;
    int res14 = 5;
    int out88 = -5;
    float tmp6 = 79.29;
    float tmp68 = 40.57;
    int i;
    for (i = 0; i < 32; i++) {
        out88 = xn[i];
        hi67 = hi67 - 5;
        res14 = tmp6 - 9;
        res14 = hi67 - out88;
        tmp68 = tmp68 - tmp6;
        out88 = hi67;
        out88 = tmp6 - out88;
        yo[i] = tmp68;
    }
}
int main() { test_func(); return 0; }


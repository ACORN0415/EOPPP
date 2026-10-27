// RTPG_3069: vars=7 stmts=9
void test_func(void) {
    int y99 = 37;
    int cur83 = 8;
    int z4 = 53;
    int res50 = 8;
    int b85 = 90;
    int cur29 = 4;
    int tmp72 = 13;
    int i;
    for (i = 0; i < 35; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        b85 = res50 + z4;
        res50 = res50 - 10;
        cur83 = res50 + y99;
        b85 = res50 - tmp72;
        cur83 = cur83 - 4;
        res50 = res50 - 2;
        cur83 = cur29;
        cur29 = res50;
        z4 = res50 - y99;
        }
    }
}
int main() { test_func(); return 0; }


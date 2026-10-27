// RTPG_3609: vars=4 stmts=8
void test_func(void) {
    int b22 = 81;
    int out17 = 0;
    int z29 = 8;
    int res15 = 46;
    int i;
    for (i = 0; i < 18; i++) {
        b22 = b22 + 2;
        res15 = res15 - 4;
        z29 = z29 + 3;
        z29 = out17 - 99;
        res15 = out17 + z29;
        b22 = z29 + res15;
        res15 = z29;
        res15 = out17 + res15;
        if (b22 < -30) {
        z29 = z29 - 5;
        }
    }
}
int main() { test_func(); return 0; }


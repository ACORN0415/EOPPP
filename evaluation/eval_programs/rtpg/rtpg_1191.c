// RTPG_1191: vars=6 stmts=6
void test_func(void) {
    int y53 = 88;
    int tmp1 = -6;
    int v17 = 6;
    int res90 = 2;
    int cnt37 = 1;
    int res21 = 49;
    int *ptr = &res21;
    int i;
    for (i = 0; i < 59; i++) {
        res21 = res90 + res90;
        tmp1 = res90 + y53;
        tmp1 = y53 - tmp1;
        cnt37 = res21 - 8;
        cnt37 = y53 + y53;
        res90 = cnt37 - tmp1;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }


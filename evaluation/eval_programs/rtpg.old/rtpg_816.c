// RTPG_816: vars=6 stmts=4
void test_func(void) {
    int a5 = 1;
    int dat83 = 47;
    int v24 = 38;
    int z5 = 1;
    int tmp2 = 51001;
    int prev29 = 1;
    int i;
    for (i = 0; i < 20; i++) {
        z5 = z5 - tmp2;
        tmp2 = z5 + z5;
        v24 = prev29 + v24;
        tmp2 = dat83 - prev29;
    }
}
int main() { test_func(); return 0; }


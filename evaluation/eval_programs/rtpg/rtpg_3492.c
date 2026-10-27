// RTPG_3492: vars=6 stmts=4
void test_func(void) {
    int lo1 = 39;
    int sum33 = -50;
    int tmp77 = 22;
    int tmp95 = 10;
    int dat93 = 7;
    int hi3 = 9;
    int i;
    for (i = 0; i < 49; i++) {
        lo1 = sum33 ^ lo1;
        tmp95 = lo1 - sum33;
        hi3 = hi3 + 3;
        hi3 = dat93 + 40;
    }
}
int main() { test_func(); return 0; }


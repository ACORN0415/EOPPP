// RTPG_4502: vars=7 stmts=2
void test_func(void) {
    int res20 = 6;
    int a42 = 4056;
    int val6 = 8;
    int val4 = 8;
    int val8 = 12;
    int dat11 = 8521;
    int acc4 = 2;
    int i;
    for (i = 0; i < 30; i++) {
        val4 = val6 & val8;
        dat11 = val4 ^ res20;
    }
}
int main() { test_func(); return 0; }


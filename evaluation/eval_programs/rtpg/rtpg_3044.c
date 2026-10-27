// RTPG_3044: vars=3 stmts=9
void test_func(void) {
    int sum23 = 0;
    int dat9 = -15;
    int res78 = 12;
    int i;
    for (i = 0; i < 9; i++) {
        res78 = res78;
        res78 = sum23 - dat9;
        res78 = dat9;
        sum23 = res78;
        dat9 = res78 + dat9;
        res78 = res78 - 3;
        res78 = res78 + sum23;
        res78 = dat9;
        sum23 = dat9 + dat9;
    }
}
int main() { test_func(); return 0; }


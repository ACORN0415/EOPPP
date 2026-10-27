// RTPG_2493: vars=7 stmts=12
void test_func(void) {
    int a16 = 29;
    int x41 = 9555;
    int hi70 = 62;
    int cnt37 = 1;
    int tmp76 = 41731;
    int out0 = 4;
    int dat22 = 9;
    int i;
    for (i = 0; i < 92; i++) {
        x41 = dat22 | cnt37;
        out0 = dat22 & cnt37;
        cnt37 = cnt37 % a16;
        hi70 = x41 + 5;
        a16 = tmp76 | hi70;
        dat22 = dat22 + 2;
        x41 = tmp76;
        dat22 = x41 + out0;
        cnt37 = hi70 + tmp76;
        tmp76 = tmp76 - 1;
        cnt37 = cnt37 - out0;
        hi70 = cnt37 - -50;
    }
}
int main() { test_func(); return 0; }


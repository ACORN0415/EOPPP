// RTPG_4262: vars=5 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int dat39 = 80;
    int y46 = 65018;
    int val28 = 31;
    int out44 = 38029;
    int res65 = 37485;
    int i;
    for (i = 0; i < 16; i++) {
        val28 = xn[i];
        y46 = val28;
        res65 = val28 - 57;
        out44 = res65;
        y46 = res65 + y46;
        out44 = res65 - dat39;
        res65 = res65 - 2;
        res65 = res65 + val28;
        dat39 = out44 + 25;
        dat39 = dat39 - 2;
        out44 = val28;
        y46 = dat39 + 62;
        if (res65 >= -11) {
        val28 = res65 + 16;
        }
        yo[i] = val28;
    }
}
int main() { test_func(); return 0; }


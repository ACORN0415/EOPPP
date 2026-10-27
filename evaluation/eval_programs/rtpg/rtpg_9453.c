// RTPG_9453: vars=6 stmts=5
void test_func(void) {
    int dat14 = 61;
    int lo1 = -33;
    int prev44 = -20;
    int c31 = 23;
    int sum9 = 92;
    int acc1 = 15467;
    int i;
    for (i = 0; i < 18; i++) {
        c31 = c31 + 2;
        prev44 = dat14;
        prev44 = dat14 % prev44;
        lo1 = lo1 % c31;
        c31 = c31 + 5;
    }
}
int main() { test_func(); return 0; }


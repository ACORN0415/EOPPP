// RTPG_2310: vars=5 stmts=6
void test_func(void) {
    int tmp49 = 94;
    int acc15 = 21739;
    int a41 = -3;
    int tmp77 = 2;
    int dat84 = 64;
    int i;
    for (i = 0; i < 45; i++) {
        dat84 = dat84 + tmp49;
        acc15 = dat84;
        a41 = tmp49 + tmp77;
        tmp49 = tmp49 - 1;
        tmp49 = acc15 - tmp49;
        acc15 = dat84 + a41;
    }
}
int main() { test_func(); return 0; }


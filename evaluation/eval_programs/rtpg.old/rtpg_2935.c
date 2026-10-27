// RTPG_2935: vars=6 stmts=11
void test_func(void) {
    int a45 = 48;
    int c31 = 5;
    int val91 = 10183;
    int res11 = 67;
    int hi62 = 71;
    int res40 = 23;
    int i;
    for (i = 0; i < 11; i++) {
        val91 = res11;
        hi62 = res11 - res40;
        res11 = res11 + c31;
        c31 = c31 + 4;
        hi62 = hi62 % val91;
        hi62 = val91 - c31;
        res11 = a45 - 9;
        val91 = hi62 | res11;
        c31 = c31 + 2;
        res40 = res40 - a45;
        res40 = res40 + -26;
        if (val91 == 43) {
        hi62 = val91 - a45;
        }
    }
}
int main() { test_func(); return 0; }


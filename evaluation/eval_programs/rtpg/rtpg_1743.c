// RTPG_1743: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int y30 = 1;
    int sum59 = -8;
    int val90 = 44;
    int i;
    for (i = 0; i < 34; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        sum59 = sum59 + 1;
        sum59 = sum59 - 1;
        sum59 = sum59;
        y30 = val90 + val90;
        y30 = y30 - 90;
        sum59 = sum59 + 2;
        }
    }
}
int main() { test_func(); return 0; }


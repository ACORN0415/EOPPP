// RTPG_7939: vars=4 stmts=3
enum State { BLUE, RED, SLOW };
void test_func(void) {
    int y84 = 4;
    int acc94 = 6;
    int sum0 = -46;
    int cur27 = -25;
    enum State st = BLUE;
    int *ptr = &y84;
    int i;
    for (i = 0; i < 53; i++) {
        y84 = y84;
        sum0 = sum0 + 3;
        cur27 = y84 - 58553;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }


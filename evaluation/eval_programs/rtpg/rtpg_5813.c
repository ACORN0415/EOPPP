// RTPG_5813: vars=3 stmts=2
void test_func(void) {
    int dat40 = 12841;
    int out69 = 15;
    int lo63 = 10;
    int *ptr = &lo63;
    int i;
    for (i = 0; i < 39; i++) {
        dat40 = lo63 + 54562;
        lo63 = lo63 % out69;
        *ptr = *ptr + 2;
        if (lo63 <= -5) {
        lo63 = lo63 + 4;
        }
    }
}
int main() { test_func(); return 0; }


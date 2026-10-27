// RTPG_5657: vars=9 stmts=7
enum State { GREEN, SLOW, ON };
void test_func(void) {
    int prev85 = 39402;
    int v77 = 63763;
    int v18 = 10;
    int res29 = 6;
    int hi89 = 18470;
    int hi84 = 10;
    int dat76 = 62786;
    int v16 = 100;
    int res74 = 5;
    enum State st = GREEN;
    int *ptr = &v18;
    int i;
    for (i = 0; i < 34; i++) {
        res74 = res29 - 3;
        v18 = v18 - 3403;
        hi84 = prev85 - dat76;
        hi89 = prev85;
        v77 = res29 + 49;
        v77 = res74 + v18;
        v77 = hi89 + hi89;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


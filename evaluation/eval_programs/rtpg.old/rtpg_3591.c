// RTPG_3591: vars=5 stmts=3
void test_func(void) {
    int res3 = 2;
    int lo50 = 1;
    int tmp27 = 11;
    int z89 = 11;
    int x75 = 12348;
    int *ptr = &z89;
    int i;
    for (i = 0; i < 52; i++) {
        res3 = x75 + lo50;
        tmp27 = lo50 - lo50;
        res3 = res3 - 4;
        *ptr = *ptr + 3;
        if (lo50 == 53) {
        z89 = lo50 - res3;
        }
    }
}
int main() { test_func(); return 0; }


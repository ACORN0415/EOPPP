// RTPG_438: vars=6 stmts=3
void test_func(void) {
    int x76 = 20654;
    int y47 = -14;
    int cnt3 = 7;
    int hi54 = 17544;
    int lo65 = 15;
    int prev39 = 13854;
    int *ptr = &cnt3;
    int i;
    for (i = 0; i < 42; i++) {
        cnt3 = cnt3 - lo65;
        y47 = y47 - 5;
        cnt3 = y47;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }


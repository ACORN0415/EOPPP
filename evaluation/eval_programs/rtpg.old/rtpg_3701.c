// RTPG_3701: vars=4 stmts=4
void test_func(void) {
    int cnt88 = 4;
    int val33 = 1;
    int sum94 = -16;
    int sum66 = -22;
    int i;
    for (i = 0; i < 73; i++) {
        sum94 = val33 + cnt88;
        cnt88 = sum66 - cnt88;
        sum94 = sum94;
        cnt88 = sum66 + 4;
    }
}
int main() { test_func(); return 0; }


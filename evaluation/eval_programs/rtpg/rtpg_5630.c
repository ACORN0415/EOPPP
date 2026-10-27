// RTPG_5630: vars=4 stmts=3
void test_func(void) {
    int acc81 = 3;
    int lo94 = 53;
    int prev65 = 4;
    int acc86 = -12;
    int *ptr = &acc86;
    int i;
    for (i = 0; i < 36; i++) {
        acc81 = acc81 + prev65;
        acc81 = acc81 + lo94;
        prev65 = acc86 - prev65;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }


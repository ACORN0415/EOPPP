// RTPG_5543: vars=4 stmts=3
void test_func(void) {
    int acc86 = 3;
    int prev65 = 53;
    int lo94 = 4;
    int acc81 = -12;
    int *ptr = &acc81;
    int i;
    for (i = 0; i < 36; i++) {
        acc86 = acc86 + lo94;
        acc86 = acc86 + prev65;
        lo94 = acc81 - lo94;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }


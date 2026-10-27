// RTPG_5353: vars=5 stmts=5
void test_func(void) {
    int prev35 = 36;
    int acc7 = 4;
    int acc47 = 4;
    int dat9 = 7;
    int acc70 = 6;
    int i;
    for (i = 0; i < 96; i++) {
        acc7 = acc47 - prev35;
        acc47 = acc70 & prev35;
        acc47 = dat9 | acc70;
        acc7 = dat9;
        acc70 = acc70 - acc47;
        if (acc70 != 28) {
        acc70 = prev35;
        }
    }
}
int main() { test_func(); return 0; }


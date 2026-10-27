// RTPG_715: vars=4 stmts=5
void test_func(void) {
    int out3 = 11267;
    int hi74 = -10;
    int acc31 = 59;
    int tmp81 = 5;
    int i;
    for (i = 0; i < 96; i++) {
        acc31 = hi74 + out3;
        tmp81 = tmp81 + acc31;
        hi74 = out3 - tmp81;
        acc31 = acc31 - 34;
        acc31 = acc31 + 5;
    }
}
int main() { test_func(); return 0; }


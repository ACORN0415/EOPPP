// RTPG_9812: vars=5 stmts=8
void test_func(void) {
    int b23 = 44250;
    int tmp12 = 93;
    int b34 = 46;
    int tmp91 = 92;
    int c39 = 3;
    int i;
    for (i = 0; i < 97; i++) {
        b34 = tmp91;
        tmp91 = b34 + tmp12;
        tmp12 = tmp91 + tmp91;
        c39 = b23 + c39;
        b34 = b34 - 1;
        tmp12 = c39 + tmp12;
        b23 = c39 + 92;
        tmp91 = c39;
    }
}
int main() { test_func(); return 0; }


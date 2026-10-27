// RTPG_9516: vars=3 stmts=3
void test_func(void) {
    int acc16 = -4;
    int hi80 = 19;
    int tmp7 = 874;
    int i;
    for (i = 0; i < 40; i++) {
        hi80 = tmp7;
        hi80 = hi80 - acc16;
        tmp7 = acc16 + acc16;
    }
}
int main() { test_func(); return 0; }


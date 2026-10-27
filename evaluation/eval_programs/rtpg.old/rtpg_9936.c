// RTPG_9936: vars=7 stmts=8
void test_func(void) {
    int hi92 = 88;
    int val68 = 2;
    int hi11 = -24;
    int acc59 = 51558;
    int dat8 = 27;
    int tmp66 = 59;
    int tmp71 = 10;
    int i;
    for (i = 0; i < 56; i++) {
        hi92 = acc59 - 75;
        val68 = val68 + 2;
        tmp71 = tmp71;
        acc59 = dat8 + acc59;
        dat8 = hi11 - acc59;
        tmp66 = tmp71 + val68;
        val68 = hi11 + 24;
        acc59 = acc59;
        if (tmp71 > 5) goto done;
    }
done:
    tmp66 = 0;
}
int main() { test_func(); return 0; }


// RTPG_4882: vars=4 stmts=6
void test_func(void) {
    int acc86 = 9264;
    int val35 = -36;
    int out82 = 1;
    int b60 = 1699;
    int *ptr = &acc86;
    int i;
    for (i = 0; i < 6; i++) {
        val35 = b60;
        acc86 = val35 - 1;
        val35 = val35 + 6;
        val35 = b60 - -20;
        out82 = acc86;
        b60 = b60 - acc86;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }


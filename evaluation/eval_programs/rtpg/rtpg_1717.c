// RTPG_1717: vars=7 stmts=4
void test_func(void) {
    int b53 = 8248;
    int dat54 = 353;
    int hi85 = 17;
    int sum50 = 6;
    int a11 = 4;
    int tmp6 = 7;
    int val96 = -8;
    int i;
    for (i = 0; i < 26; i++) {
        a11 = sum50 + dat54;
        dat54 = hi85 + val96;
        val96 = hi85 - dat54;
        hi85 = val96 + dat54;
    }
}
int main() { test_func(); return 0; }


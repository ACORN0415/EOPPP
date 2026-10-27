// RTPG_628: vars=8 stmts=4
void test_func(void) {
    int prev86 = 2;
    int x68 = 67;
    int tmp8 = 10;
    int acc98 = 10282;
    int x86 = 45145;
    int prev13 = 35;
    int b30 = 94;
    int val27 = 45152;
    int *ptr = &prev13;
    int i;
    for (i = 0; i < 20; i++) {
        val27 = val27 + b30;
        b30 = x86 - 8;
        acc98 = x68 - prev13;
        val27 = acc98;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


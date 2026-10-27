// RTPG_638: vars=8 stmts=4
void test_func(void) {
    int b30 = 2;
    int prev86 = 67;
    int x86 = 10;
    int prev13 = 10282;
    int x68 = 45145;
    int acc98 = 35;
    int val27 = 94;
    int tmp8 = 45152;
    int *ptr = &acc98;
    int i;
    for (i = 0; i < 20; i++) {
        tmp8 = tmp8 + val27;
        val27 = x68 - 8;
        prev13 = prev86 - acc98;
        tmp8 = prev13;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


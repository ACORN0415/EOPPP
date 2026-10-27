// RTPG_9453: vars=6 stmts=6
void test_func(void) {
    int tmp58 = 87;
    int lo45 = -47;
    int tmp74 = 35990;
    int acc68 = 63238;
    int val26 = 58168;
    int val84 = -33;
    int i;
    for (i = 0; i < 82; i++) {
        val84 = acc68 + val84;
        acc68 = acc68 + 2;
        val26 = acc68 + tmp74;
        acc68 = acc68 + tmp74;
        val26 = val84;
        val84 = val26;
    }
}
int main() { test_func(); return 0; }


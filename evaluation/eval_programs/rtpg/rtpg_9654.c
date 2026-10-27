// RTPG_9654: vars=6 stmts=6
void test_func(void) {
    int val26 = 87;
    int tmp74 = -47;
    int lo45 = 35990;
    int tmp58 = 63238;
    int acc68 = 58168;
    int val84 = -33;
    int i;
    for (i = 0; i < 82; i++) {
        val84 = tmp58 + val84;
        tmp58 = tmp58 + 2;
        acc68 = tmp58 + lo45;
        tmp58 = tmp58 + lo45;
        acc68 = val84;
        val84 = acc68;
    }
}
int main() { test_func(); return 0; }


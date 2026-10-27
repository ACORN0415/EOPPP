// RTPG_7902: vars=4 stmts=5
void test_func(void) {
    int cnt67 = 23562;
    int z43 = 42665;
    int acc88 = 483;
    int a98 = 6;
    int i;
    for (i = 0; i < 61; i++) {
        a98 = z43 + cnt67;
        z43 = cnt67;
        a98 = cnt67 + cnt67;
        a98 = a98 - 0;
        cnt67 = cnt67 + z43;
    }
}
int main() { test_func(); return 0; }


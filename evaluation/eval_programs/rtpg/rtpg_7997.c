// RTPG_7997: vars=4 stmts=5
void test_func(void) {
    int acc88 = 23562;
    int cnt67 = 42665;
    int z43 = 483;
    int a98 = 6;
    int i;
    for (i = 0; i < 61; i++) {
        a98 = cnt67 + acc88;
        cnt67 = acc88;
        a98 = acc88 + acc88;
        a98 = a98 - 0;
        acc88 = acc88 + cnt67;
    }
}
int main() { test_func(); return 0; }


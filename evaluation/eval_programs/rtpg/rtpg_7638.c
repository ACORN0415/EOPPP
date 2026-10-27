// RTPG_7638: vars=4 stmts=8
void test_func(void) {
    int acc11 = 2;
    int prev83 = 47;
    int prev75 = 19005;
    int c53 = 50;
    int h0 = 30;
    int sv0 = 0;
    int h1 = 56597;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        prev83 = acc11 - prev83;
        prev75 = prev83 * -24;
        acc11 = acc11 * 20954;
        acc11 = acc11 + prev75;
        acc11 = acc11 - 1;
        prev83 = prev75;
        prev83 = prev83 * 55;
        prev75 = acc11 + 51023;
    }
}
int main() { test_func(); return 0; }


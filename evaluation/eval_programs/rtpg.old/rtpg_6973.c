// RTPG_6973: vars=4 stmts=7
void test_func(void) {
    int x66 = 8;
    int c20 = 6;
    int cur83 = 5;
    int a82 = 7;
    int i;
    for (i = 0; i < 71; i++) {
        a82 = x66 + x66;
        a82 = a82 + c20;
        c20 = x66 + c20;
        c20 = a82 + c20;
        c20 = x66 - 83;
        a82 = x66 + 34337;
        c20 = cur83 - 77;
        if (cur83 > 25) goto done;
    }
done:
    cur83 = 0;
}
int main() { test_func(); return 0; }


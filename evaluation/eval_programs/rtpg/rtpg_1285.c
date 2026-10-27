// RTPG_1285: vars=5 stmts=9
void test_func(void) {
    int acc5 = 5;
    int cnt27 = 11996;
    int y81 = 5;
    int dat93 = 13956;
    int b48 = 88;
    int i;
    for (i = 0; i < 16; i++) {
        dat93 = dat93 - y81;
        dat93 = b48 - acc5;
        b48 = acc5 + b48;
        b48 = acc5 + 65;
        dat93 = y81 - acc5;
        y81 = y81 + 2;
        acc5 = acc5;
        b48 = b48 - dat93;
        b48 = dat93 - y81;
        if (dat93 > 34) goto done;
    }
done:
    acc5 = 0;
}
int main() { test_func(); return 0; }


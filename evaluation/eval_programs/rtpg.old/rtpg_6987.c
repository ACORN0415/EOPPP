// RTPG_6987: vars=6 stmts=4
void test_func(void) {
    int v23 = 10;
    int sum89 = 13;
    int tmp90 = -17;
    int acc45 = -34;
    int acc87 = 48;
    int dat95 = 6;
    int i;
    for (i = 0; i < 65; i++) {
        tmp90 = sum89 + tmp90;
        acc45 = tmp90;
        dat95 = dat95 - 3;
        tmp90 = acc45 + acc87;
    }
}
int main() { test_func(); return 0; }


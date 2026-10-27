// RTPG_8419: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int acc11 = 81;
    int x50 = 41;
    int tmp23 = 29;
    int acc89 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        acc89 = xn[i];
        acc89 = tmp23 - acc11;
        acc11 = x50 + 5;
        acc89 = acc89 + x50;
        tmp23 = acc11;
        acc89 = acc11 + -50;
        if (acc11 > 57) goto done;
        if (acc11 < 86) {
        acc11 = acc11 + 4;
        }
        yo[i] = tmp23;
    }
done:
    x50 = 0;
}
int main() { test_func(); return 0; }


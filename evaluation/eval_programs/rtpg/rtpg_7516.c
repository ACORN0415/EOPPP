// RTPG_7516: vars=3 stmts=4
void test_func(void) {
    int dat74 = -15;
    int a65 = 1;
    int x46 = 29;
    int i;
    for (i = 0; i < 38; i++) {
        a65 = a65 + x46;
        dat74 = a65 + 34;
        dat74 = dat74 - 2;
        dat74 = dat74 - 3;
        if (a65 > 18) goto done;
        if (dat74 == 22) {
        dat74 = a65 - dat74;
        }
    }
done:
    dat74 = 0;
}
int main() { test_func(); return 0; }


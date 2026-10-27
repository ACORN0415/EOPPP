// RTPG_9174: vars=4 stmts=2
void test_func(void) {
    int out85 = 25;
    int b49 = 1;
    int tmp47 = 8378;
    int a36 = -27;
    int i;
    for (i = 0; i < 22; i++) {
        b49 = b49 - tmp47;
        tmp47 = out85;
        if (tmp47 > 68) goto done;
    }
done:
    a36 = 0;
}
int main() { test_func(); return 0; }


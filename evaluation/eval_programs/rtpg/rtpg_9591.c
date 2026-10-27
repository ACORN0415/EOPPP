// RTPG_9591: vars=3 stmts=6
void test_func(void) {
    int a42 = 7;
    int tmp91 = 31;
    int y90 = 10;
    int i;
    for (i = 0; i < 28; i++) {
        tmp91 = tmp91 + 3134;
        a42 = a42 - 1;
        a42 = a42 + tmp91;
        a42 = y90 + a42;
        tmp91 = tmp91 + 4;
        a42 = a42 + a42;
        if (y90 > 60) goto done;
    }
done:
    y90 = 0;
}
int main() { test_func(); return 0; }


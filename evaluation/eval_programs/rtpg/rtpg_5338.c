// RTPG_5338: vars=8 stmts=5
void test_func(void) {
    int lo56 = 54998;
    int tmp40 = 5;
    int dat54 = 87;
    int sum89 = 26661;
    int hi88 = 91;
    int cur43 = 96;
    int b87 = 17;
    int y42 = 15;
    int *ptr = &b87;
    int i;
    for (i = 0; i < 26; i++) {
        sum89 = b87;
        hi88 = lo56 - dat54;
        dat54 = dat54 - lo56;
        hi88 = cur43 % tmp40;
        y42 = tmp40 % b87;
        *ptr = *ptr + 2;
        if (dat54 > 18376) goto done;
    }
done:
    hi88 = 0;
}
int main() { test_func(); return 0; }


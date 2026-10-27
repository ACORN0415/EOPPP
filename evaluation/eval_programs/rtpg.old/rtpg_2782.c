// RTPG_2782: vars=6 stmts=2
void test_func(void) {
    int cur71 = 0;
    int b46 = 9;
    int a78 = -32;
    int prev87 = 8;
    int prev11 = 37;
    int sum13 = 34;
    int i;
    for (i = 0; i < 70; i++) {
        sum13 = prev87 + 91;
        sum13 = sum13 - b46;
        if (prev11 > -2) goto done;
    }
done:
    b46 = 0;
}
int main() { test_func(); return 0; }


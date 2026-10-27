// RTPG_7550: vars=3 stmts=4
void test_func(void) {
    int x5 = 4;
    int sum33 = 32;
    int dat28 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        dat28 = sum33;
        sum33 = x5 - sum33;
        sum33 = dat28 - 35;
        dat28 = dat28 + 1;
    }
}
int main() { test_func(); return 0; }


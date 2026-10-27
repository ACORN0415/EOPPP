// RTPG_2268: vars=5 stmts=4
void test_func(void) {
    int dat0 = 56;
    int cnt37 = 32;
    int cur67 = 9;
    int sum60 = 18889;
    int b54 = 34245;
    int i;
    for (i = 0; i < 86; i++) {
        cur67 = sum60 + dat0;
        sum60 = cur67;
        dat0 = dat0 + 3;
        cnt37 = cnt37 + sum60;
    }
}
int main() { test_func(); return 0; }


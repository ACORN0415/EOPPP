// RTPG_8649: vars=3 stmts=3
void test_func(void) {
    int sum34 = 27529;
    int cnt41 = 6;
    int out41 = 22;
    int *ptr = &out41;
    int i;
    for (i = 0; i < 85; i++) {
        out41 = sum34 + cnt41;
        sum34 = sum34 - out41;
        cnt41 = cnt41 + cnt41;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


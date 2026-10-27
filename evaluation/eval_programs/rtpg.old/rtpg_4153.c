// RTPG_4153: vars=5 stmts=2
void test_func(void) {
    int x22 = 7;
    int cnt65 = 51988;
    int v28 = 31755;
    int v36 = 39485;
    int sum50 = 9;
    int *ptr = &sum50;
    int i;
    for (i = 0; i < 58; i++) {
        v28 = x22 + v36;
        x22 = x22 ^ v28;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }


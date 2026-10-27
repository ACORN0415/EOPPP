// RTPG_253: vars=3 stmts=4
void test_func(void) {
    int out51 = 10;
    int cnt65 = 85;
    int v80 = -12;
    int *ptr = &v80;
    int i;
    for (i = 0; i < 10; i++) {
        v80 = v80 + out51;
        cnt65 = cnt65 | cnt65;
        cnt65 = cnt65 + v80;
        cnt65 = cnt65 - -38;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


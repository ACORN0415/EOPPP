// RTPG_5975: vars=5 stmts=8
void test_func(void) {
    int x41 = 0;
    int dat85 = 14;
    int cur31 = -11;
    int sum0 = 29;
    int c33 = 3;
    int i;
    for (i = 0; i < 52; i++) {
        c33 = sum0 + x41;
        dat85 = sum0 + sum0;
        c33 = cur31 + cur31;
        x41 = cur31;
        cur31 = cur31 - 5;
        c33 = c33 - dat85;
        c33 = c33 - 3;
        x41 = cur31;
    }
}
int main() { test_func(); return 0; }


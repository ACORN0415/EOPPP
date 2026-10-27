// RTPG_508: vars=3 stmts=4
void test_func(void) {
    int cur47 = 7;
    int hi5 = 30715;
    int b84 = 6842;
    int *ptr = &hi5;
    int i;
    for (i = 0; i < 55; i++) {
        cur47 = b84;
        cur47 = cur47 + 1;
        cur47 = cur47 - 4;
        hi5 = b84 + cur47;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }


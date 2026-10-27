// RTPG_9541: vars=3 stmts=7
void test_func(void) {
    int sum10 = 95;
    int dat31 = -33;
    int a79 = 3;
    int *ptr = &dat31;
    int i;
    for (i = 0; i < 93; i++) {
        a79 = a79;
        sum10 = sum10 - a79;
        dat31 = sum10 + a79;
        sum10 = sum10 - 1;
        dat31 = dat31 + 2;
        a79 = dat31 + a79;
        dat31 = sum10 + dat31;
        *ptr = *ptr + 5;
        if (a79 != 67) {
        sum10 = sum10 - 3;
        }
    }
}
int main() { test_func(); return 0; }


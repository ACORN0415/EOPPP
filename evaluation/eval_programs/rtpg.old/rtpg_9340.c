// RTPG_9340: vars=5 stmts=4
void test_func(void) {
    int sum10 = 7;
    int v80 = 9;
    int prev3 = 34;
    int dat24 = 76;
    int y77 = -41;
    int *ptr = &sum10;
    int i;
    for (i = 0; i < 39; i++) {
        prev3 = dat24 + -50;
        dat24 = sum10;
        v80 = y77;
        prev3 = prev3 + 5;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


// RTPG_5611: vars=4 stmts=2
void test_func(void) {
    int prev86 = -5;
    int val1 = 50743;
    int b55 = 18664;
    int v99 = 63;
    int *ptr = &val1;
    int i;
    for (i = 0; i < 52; i++) {
        v99 = prev86 - b55;
        v99 = v99 - 12;
        *ptr = *ptr + 2;
        if (b55 != -43) {
        b55 = v99 + val1;
        }
    }
}
int main() { test_func(); return 0; }


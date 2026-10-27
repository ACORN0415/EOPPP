// RTPG_5524: vars=4 stmts=2
void test_func(void) {
    int val1 = -5;
    int b55 = 50743;
    int prev86 = 18664;
    int v99 = 63;
    int *ptr = &b55;
    int i;
    for (i = 0; i < 52; i++) {
        v99 = val1 - prev86;
        v99 = v99 - 12;
        *ptr = *ptr + 2;
        if (prev86 != -43) {
        prev86 = v99 + b55;
        }
    }
}
int main() { test_func(); return 0; }


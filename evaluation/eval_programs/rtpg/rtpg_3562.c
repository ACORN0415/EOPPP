// RTPG_3562: vars=4 stmts=12
void test_func(void) {
    int z33 = 56272;
    int sum50 = 4;
    int lo5 = 7;
    int cur73 = 45;
    int *ptr = &sum50;
    int i;
    for (i = 0; i < 49; i++) {
        sum50 = sum50 + 2;
        cur73 = lo5 - 100;
        lo5 = lo5 + 3;
        cur73 = cur73 + 5;
        lo5 = lo5 - z33;
        cur73 = cur73 + 33;
        sum50 = lo5 + 14;
        z33 = lo5 + sum50;
        sum50 = lo5 + 1;
        z33 = lo5 + cur73;
        cur73 = cur73 - 5;
        sum50 = cur73 + 3;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


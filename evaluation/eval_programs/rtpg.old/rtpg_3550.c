// RTPG_3550: vars=4 stmts=12
void test_func(void) {
    int z33 = 56272;
    int cur73 = 4;
    int lo5 = 7;
    int sum50 = 45;
    int *ptr = &cur73;
    int i;
    for (i = 0; i < 49; i++) {
        cur73 = cur73 + 2;
        sum50 = lo5 - 100;
        lo5 = lo5 + 3;
        sum50 = sum50 + 5;
        lo5 = lo5 - z33;
        sum50 = sum50 + 33;
        cur73 = lo5 + 14;
        z33 = lo5 + cur73;
        cur73 = lo5 + 1;
        z33 = lo5 + sum50;
        sum50 = sum50 - 5;
        cur73 = sum50 + 3;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }


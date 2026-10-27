// RTPG_7048: vars=4 stmts=3
void test_func(void) {
    int lo55 = 25;
    int lo76 = 1;
    double cnt35 = 89.02;
    int lo5 = 7;
    int *ptr = &cnt35;
    int i;
    for (i = 0; i < 74; i++) {
        lo5 = lo55 + 60;
        cnt35 = cnt35 - lo55;
        lo55 = lo76 + lo55;
        *ptr = *ptr + 2;
        if (lo5 >= -8) {
        lo76 = lo55 - -32;
        }
    }
}
int main() { test_func(); return 0; }


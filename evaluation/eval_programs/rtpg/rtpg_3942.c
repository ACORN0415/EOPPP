// RTPG_3942: vars=5 stmts=6
void test_func(void) {
    int sum42 = 11;
    int lo42 = 53;
    int b80 = 8;
    int sum64 = 25;
    int tmp4 = 59;
    int i;
    for (i = 0; i < 75; i++) {
        lo42 = b80 + sum64;
        tmp4 = sum42 - 9;
        tmp4 = sum64;
        lo42 = lo42 + b80;
        sum64 = b80 - sum42;
        sum42 = sum64 + 54003;
        if (sum42 == -1) {
        b80 = sum42;
        }
    }
}
int main() { test_func(); return 0; }


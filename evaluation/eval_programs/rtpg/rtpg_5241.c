// RTPG_5241: vars=4 stmts=2
void test_func(void) {
    int b26 = 4;
    int tmp88 = 54238;
    int tmp4 = 17949;
    int sum24 = 2;
    int i;
    for (i = 0; i < 96; i++) {
        tmp88 = b26 % sum24;
        b26 = tmp88 / tmp4;
        if (tmp88 >= 29) {
        tmp88 = sum24 - 54011;
        }
    }
}
int main() { test_func(); return 0; }


// RTPG_2709: vars=4 stmts=8
void test_func(void) {
    int sum73 = 9;
    int cnt88 = 50;
    int tmp4 = 6;
    int val98 = 9;
    int i;
    for (i = 0; i < 25; i++) {
        tmp4 = sum73 % sum73;
        sum73 = sum73 + 3;
        tmp4 = tmp4 - 1;
        sum73 = sum73 / cnt88;
        cnt88 = sum73;
        cnt88 = cnt88 + val98;
        tmp4 = tmp4 + sum73;
        sum73 = sum73;
        if (tmp4 == 32) {
        tmp4 = tmp4 - 63;
        }
    }
}
int main() { test_func(); return 0; }


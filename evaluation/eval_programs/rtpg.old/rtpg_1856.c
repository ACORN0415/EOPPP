// RTPG_1856: vars=4 stmts=6
void test_func(void) {
    int b94 = 60;
    int hi49 = 2;
    float c42 = 66.07;
    int dat29 = 44126;
    int i;
    for (i = 0; i < 50; i++) {
        b94 = b94 + 2;
        c42 = c42 - 21;
        b94 = dat29 + b94;
        dat29 = dat29 - hi49;
        dat29 = dat29 + b94;
        b94 = hi49;
        if (hi49 < 90) {
        b94 = dat29 + 90;
        }
    }
}
int main() { test_func(); return 0; }


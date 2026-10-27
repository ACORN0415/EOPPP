// RTPG_8147: vars=5 stmts=2
void test_func(void) {
    int cur3 = 8;
    int dat38 = 47;
    int hi16 = 45;
    int dat44 = 86;
    int tmp10 = 14;
    int i;
    for (i = 0; i < 60; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        cur3 = tmp10;
        dat44 = dat44 - 3;
        }
    }
}
int main() { test_func(); return 0; }


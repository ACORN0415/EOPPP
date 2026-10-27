// RTPG_519: vars=4 stmts=8
void test_func(void) {
    int hi16 = 47;
    int hi71 = 20;
    int sum13 = 3;
    int out73 = 10;
    int *ptr = &hi16;
    int i;
    for (i = 0; i < 44; i++) {
        hi71 = hi71 + 3;
        hi71 = hi16 - sum13;
        hi71 = hi71;
        sum13 = out73 + sum13;
        out73 = out73 - 1;
        out73 = out73 + hi71;
        hi16 = hi16 - 11323;
        hi71 = out73 - hi71;
        *ptr = *ptr + 3;
        if (hi71 > 10) {
        hi71 = hi71 - 3;
        }
    }
}
int main() { test_func(); return 0; }


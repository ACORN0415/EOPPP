// RTPG_3893: vars=4 stmts=4
void test_func(void) {
    int a72 = 8746;
    int tmp14 = 49749;
    int acc12 = 44018;
    int res78 = 56468;
    int i;
    for (i = 0; i < 39; i++) {
        acc12 = a72 + tmp14;
        a72 = a72 + 4;
        tmp14 = acc12;
        a72 = a72 + 68;
    }
}
int main() { test_func(); return 0; }


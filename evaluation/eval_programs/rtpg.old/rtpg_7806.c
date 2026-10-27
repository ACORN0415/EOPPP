// RTPG_7806: vars=5 stmts=3
void test_func(void) {
    int acc97 = 34;
    int b90 = -33;
    int res99 = 9;
    int a12 = -29;
    int lo10 = 62;
    int i;
    for (i = 0; i < 15; i++) {
        res99 = lo10 + res99;
        acc97 = lo10;
        lo10 = res99;
        if (lo10 != -38) {
        lo10 = lo10 + a12;
        }
    }
}
int main() { test_func(); return 0; }


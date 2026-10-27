// RTPG_8715: vars=5 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int c54 = 25;
    int lo45 = 21848;
    int z21 = 22;
    int b28 = 34573;
    int tmp14 = 5;
    int i;
    for (i = 0; i < 32; i++) {
        c54 = xn[i];
        lo45 = lo45;
        b28 = b28 - 1;
        c54 = lo45 + c54;
        lo45 = c54 - tmp14;
        c54 = lo45 - tmp14;
        c54 = lo45;
        b28 = c54 - tmp14;
        if (lo45 <= 25) {
        b28 = z21 + b28;
        }
        yo[i] = tmp14;
    }
}
int main() { test_func(); return 0; }


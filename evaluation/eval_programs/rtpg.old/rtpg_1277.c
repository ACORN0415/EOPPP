// RTPG_1277: vars=5 stmts=5
void test_func(void) {
    int acc31 = 28;
    int cnt86 = 34223;
    int out41 = 55517;
    int cur86 = 6;
    int prev39 = -13;
    int i;
    for (i = 0; i < 81; i++) {
        cur86 = cnt86 - acc31;
        out41 = cur86 + prev39;
        out41 = cur86 + 8;
        cnt86 = cnt86 + 3;
        out41 = out41 + 3;
        if (out41 > 67) goto done;
        if (cnt86 >= 95) {
        out41 = cur86 + cnt86;
        }
    }
done:
    acc31 = 0;
}
int main() { test_func(); return 0; }


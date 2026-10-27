// RTPG_6920: vars=3 stmts=6
void test_func(void) {
    int prev91 = 8;
    int c22 = 10;
    int cur61 = -12;
    int i;
    for (i = 0; i < 37; i++) {
        c22 = prev91;
        c22 = prev91 - cur61;
        prev91 = cur61 + 47;
        prev91 = prev91 - 3;
        cur61 = prev91 - c22;
        prev91 = c22 + prev91;
        if (cur61 <= -26) {
        c22 = cur61 - c22;
        }
    }
}
int main() { test_func(); return 0; }


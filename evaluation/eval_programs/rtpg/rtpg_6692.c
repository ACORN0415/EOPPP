// RTPG_6692: vars=3 stmts=4
void test_func(void) {
    int cnt3 = 27714;
    int val43 = 7;
    int v7 = 8;
    int i;
    for (i = 0; i < 11; i++) {
        cnt3 = cnt3 - val43;
        cnt3 = val43 + v7;
        v7 = cnt3 - 19461;
        cnt3 = cnt3;
    }
}
int main() { test_func(); return 0; }


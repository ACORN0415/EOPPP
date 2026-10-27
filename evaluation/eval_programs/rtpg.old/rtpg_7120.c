// RTPG_7120: vars=4 stmts=5
void test_func(void) {
    int v10 = 82;
    int c21 = 40;
    int cnt13 = 18;
    int lo83 = 30418;
    int i;
    for (i = 0; i < 17; i++) {
        cnt13 = cnt13 - 3;
        v10 = v10 + 47;
        v10 = v10 - 2;
        cnt13 = c21;
        cnt13 = lo83 - cnt13;
    }
}
int main() { test_func(); return 0; }


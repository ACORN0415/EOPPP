// RTPG_7190: vars=4 stmts=5
void test_func(void) {
    int c21 = 82;
    int v10 = 40;
    int cnt13 = 18;
    int lo83 = 30418;
    int i;
    for (i = 0; i < 17; i++) {
        cnt13 = cnt13 - 3;
        c21 = c21 + 47;
        c21 = c21 - 2;
        cnt13 = v10;
        cnt13 = lo83 - cnt13;
    }
}
int main() { test_func(); return 0; }


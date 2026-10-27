// RTPG_8115: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int cur58 = 20;
    int v54 = 1;
    int cnt65 = 15;
    int i;
    for (i = 0; i < 94; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        cnt65 = cnt65 - 5;
        cur58 = cur58 + 5;
        cur58 = cur58 - 84;
        cur58 = cnt65 + cur58;
        v54 = cnt65 + cur58;
        v54 = cur58 - v54;
        cur58 = cnt65 + 1;
        }
    }
}
int main() { test_func(); return 0; }


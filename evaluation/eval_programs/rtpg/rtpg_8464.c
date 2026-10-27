// RTPG_8464: vars=5 stmts=4
int idx_arr[16];
void test_func(void) {
    int dat81 = 44245;
    int tmp76 = 28;
    int cnt94 = 53;
    int acc10 = 60603;
    int prev84 = 40;
    int i;
    for (i = 0; i < 38; i++) {
        dat81 = xn[idx_arr[i]];
        tmp76 = tmp76 - 3;
        acc10 = acc10 + 8;
        acc10 = cnt94 + prev84;
        acc10 = prev84 / dat81;
        if (acc10 == 27) {
        acc10 = prev84 + tmp76;
        }
    }
}
int main() { test_func(); return 0; }


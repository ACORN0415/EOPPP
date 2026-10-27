// RTPG_8687: vars=4 stmts=3
int idx_arr[16];
void test_func(void) {
    int cur58 = 9;
    int a95 = -31;
    int a4 = 1;
    int b59 = 11236;
    int i;
    for (i = 0; i < 62; i++) {
        a95 = xn[idx_arr[i]];
        b59 = a95;
        cur58 = a4;
        b59 = a95;
        if (a95 != 65) {
        b59 = b59;
        }
    }
}
int main() { test_func(); return 0; }


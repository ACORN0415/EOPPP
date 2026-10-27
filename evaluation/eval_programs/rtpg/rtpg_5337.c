// RTPG_5337: vars=9 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int v40 = -5;
    int val15 = 50;
    int y93 = 40800;
    int y23 = 66;
    int tmp74 = 17857;
    int x18 = 49;
    int c38 = 3;
    int prev75 = 32;
    int v24 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        tmp74 = xn[i];
        x18 = xn[idx_arr[i]];
        x18 = y23;
        c38 = tmp74 & v40;
        c38 = y23 % tmp74;
        val15 = val15 ^ prev75;
        if (v24 <= 75) {
        y93 = tmp74 - 10938;
        }
        yo[i] = val15;
    }
}
int main() { test_func(); return 0; }


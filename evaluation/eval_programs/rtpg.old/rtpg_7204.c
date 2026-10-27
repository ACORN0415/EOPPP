// RTPG_7204: vars=4 stmts=4
int idx_arr[16];
void test_func(void) {
    int cur61 = 7180;
    int cur43 = 50687;
    int b60 = 28;
    int cur69 = 9;
    int i;
    for (i = 0; i < 9; i++) {
        cur61 = xn[idx_arr[i]];
        cur69 = b60;
        b60 = cur69 / cur43;
        cur61 = cur69;
        cur43 = cur69 % cur61;
    }
}
int main() { test_func(); return 0; }


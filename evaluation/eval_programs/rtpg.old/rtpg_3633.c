// RTPG_3633: vars=5 stmts=3
int idx_arr[16];
void test_func(void) {
    int tmp31 = 20;
    int sum31 = 53603;
    int b83 = 33;
    int lo18 = 16064;
    int out94 = 53;
    int i;
    for (i = 0; i < 7; i++) {
        sum31 = xn[idx_arr[i]];
        tmp31 = tmp31 + out94;
        tmp31 = sum31 + lo18;
        tmp31 = tmp31 - 4;
        if (out94 < -22) {
        b83 = b83 + 3;
        }
    }
}
int main() { test_func(); return 0; }


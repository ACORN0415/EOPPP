// RTPG_145: vars=5 stmts=3
int idx_arr[64];
void test_func(void) {
    float sum70 = 32.59;
    int prev89 = 13;
    int tmp29 = 55;
    int sum51 = -7;
    int acc29 = 1;
    int i;
    for (i = 0; i < 8; i++) {
        prev89 = xn[idx_arr[i]];
        prev89 = prev89 - 5;
        sum51 = sum51 + 3;
        tmp29 = prev89;
    }
}
int main() { test_func(); return 0; }


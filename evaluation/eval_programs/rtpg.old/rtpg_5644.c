// RTPG_5644: vars=5 stmts=4
int idx_arr[32];
void test_func(void) {
    int b68 = 2;
    int c64 = 0;
    int prev57 = 13561;
    int res8 = 57723;
    int c48 = 89;
    int i;
    for (i = 0; i < 73; i++) {
        c64 = xn[idx_arr[i]];
        c48 = c48 + 3;
        b68 = b68 + 4;
        b68 = prev57 - 11;
        prev57 = res8 - prev57;
    }
}
int main() { test_func(); return 0; }


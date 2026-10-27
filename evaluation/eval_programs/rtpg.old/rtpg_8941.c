// RTPG_8941: vars=7 stmts=7
int idx_arr[64];
void test_func(void) {
    int lo37 = 1;
    int a48 = 30;
    int x87 = 87;
    int z1 = 8;
    int hi3 = 9088;
    int lo40 = 1;
    int cnt42 = 91;
    int i;
    for (i = 0; i < 50; i++) {
        a48 = xn[idx_arr[i]];
        lo37 = lo37 + z1;
        cnt42 = z1 + lo37;
        hi3 = z1 + x87;
        cnt42 = hi3;
        lo37 = lo37 - 4;
        z1 = z1 + 5;
        x87 = lo40 - a48;
    }
}
int main() { test_func(); return 0; }


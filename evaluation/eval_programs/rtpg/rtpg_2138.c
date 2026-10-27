// RTPG_2138: vars=4 stmts=3
int idx_arr[16];
void test_func(void) {
    int cur63 = 12;
    int acc70 = 6;
    int res12 = 8;
    int v97 = 21;
    int i;
    for (i = 0; i < 37; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        v97 = acc70 + cur63;
        v97 = cur63;
        cur63 = acc70 - -48;
        }
    }
}
int main() { test_func(); return 0; }


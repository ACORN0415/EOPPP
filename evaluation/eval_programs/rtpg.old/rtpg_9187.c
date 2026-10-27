// RTPG_9187: vars=5 stmts=2
int idx_arr[32];
void test_func(void) {
    int cnt78 = 23928;
    int val70 = 8;
    int acc89 = 55659;
    int cnt83 = 28;
    int x58 = 38;
    int i;
    for (i = 0; i < 14; i++) {
        cnt83 = xn[idx_arr[i]];
        cnt83 = cnt83;
        cnt83 = acc89 - val70;
    }
}
int main() { test_func(); return 0; }


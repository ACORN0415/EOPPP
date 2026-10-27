// RTPG_7419: vars=4 stmts=3
int idx_arr[64];
void test_func(void) {
    int val2 = 4;
    int prev58 = 39256;
    int cur88 = 9;
    int tmp61 = 4;
    int i;
    for (i = 0; i < 75; i++) {
        cur88 = xn[idx_arr[i]];
        tmp61 = prev58 + -31;
        prev58 = prev58 - cur88;
        cur88 = cur88 - 4;
    }
}
int main() { test_func(); return 0; }


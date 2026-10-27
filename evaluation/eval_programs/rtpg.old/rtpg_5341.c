// RTPG_5341: vars=5 stmts=5
void test_func(void) {
    int cur88 = 29;
    int a80 = 3748;
    int hi8 = 9;
    int val78 = 28;
    int v38 = 39880;
    int *ptr = &cur88;
    int i;
    for (i = 0; i < 78; i++) {
        a80 = val78 + v38;
        a80 = a80 - 4;
        val78 = val78 + a80;
        cur88 = cur88 + 3;
        a80 = val78;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }


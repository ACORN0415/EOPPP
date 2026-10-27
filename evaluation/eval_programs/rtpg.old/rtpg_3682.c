// RTPG_3682: vars=8 stmts=11
void test_func(void) {
    int cur14 = -10;
    int tmp21 = 30;
    int cur88 = -44;
    int prev33 = 22;
    int v44 = 42;
    int val29 = -16;
    int z41 = 4;
    int dat55 = 7;
    int i;
    for (i = 0; i < 14; i++) {
        cur14 = v44;
        val29 = prev33 % cur88;
        cur14 = cur14 - 3;
        v44 = prev33 / dat55;
        cur14 = cur14 & tmp21;
        val29 = val29 + 2;
        prev33 = prev33 - tmp21;
        prev33 = tmp21 / tmp21;
        cur14 = cur14 + 1;
        dat55 = z41 + prev33;
        dat55 = cur88 % cur14;
        if (val29 != 23) {
        cur14 = cur88 + dat55;
        }
    }
}
int main() { test_func(); return 0; }


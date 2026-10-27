// RTPG_934: vars=3 stmts=5
void test_func(void) {
    int v44 = 1;
    int x36 = 35;
    int hi14 = 78;
    int i;
    for (i = 0; i < 31; i++) {
        x36 = v44 - hi14;
        x36 = v44;
        v44 = x36 - 78;
        v44 = v44;
        x36 = v44;
        if (v44 < 24) {
        x36 = v44 - x36;
        }
    }
}
int main() { test_func(); return 0; }


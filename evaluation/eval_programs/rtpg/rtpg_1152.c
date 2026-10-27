// RTPG_1152: vars=3 stmts=5
void test_func(void) {
    int lo10 = -21;
    int y93 = 35;
    int v88 = 7;
    int i;
    for (i = 0; i < 30; i++) {
        y93 = v88 + 44;
        y93 = y93;
        v88 = y93;
        y93 = lo10 + y93;
        v88 = lo10;
        if (y93 > -46) goto done;
    }
done:
    y93 = 0;
}
int main() { test_func(); return 0; }


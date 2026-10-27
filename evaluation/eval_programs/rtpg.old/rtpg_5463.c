// RTPG_5463: vars=8 stmts=6
void test_func(void) {
    int z67 = 1;
    int c61 = 3;
    int dat39 = 40127;
    int val87 = 7;
    int cnt44 = 40398;
    int z51 = 62232;
    int z52 = 21120;
    int a82 = 54;
    int i;
    for (i = 0; i < 24; i++) {
        z67 = dat39 + z52;
        cnt44 = val87 + 6;
        cnt44 = cnt44 - 4;
        a82 = dat39 + cnt44;
        z52 = z52 + 3;
        z67 = val87 - val87;
        if (z51 > 34) goto done;
    }
done:
    cnt44 = 0;
}
int main() { test_func(); return 0; }


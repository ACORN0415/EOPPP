// RTPG_4834: vars=7 stmts=8
void test_func(void) {
    int prev72 = 35180;
    int v39 = 34257;
    int x56 = 7;
    int cnt87 = 14817;
    int v24 = 36678;
    int out49 = 1;
    int c22 = 4;
    int i;
    for (i = 0; i < 49; i++) {
        x56 = prev72;
        c22 = x56 + cnt87;
        v39 = v39 + 2;
        c22 = prev72 + x56;
        cnt87 = v39 + v24;
        out49 = prev72;
        prev72 = c22 + 8;
        v24 = v39 - v39;
        if (x56 < -24) {
        c22 = prev72 + 5;
        }
    }
}
int main() { test_func(); return 0; }


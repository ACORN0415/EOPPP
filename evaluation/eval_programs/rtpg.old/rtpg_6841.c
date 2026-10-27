// RTPG_6841: vars=3 stmts=6
void test_func(void) {
    int v86 = 19;
    int cnt82 = 9;
    int prev2 = 4;
    int h0 = 39;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 41; i++) {
        prev2 = cnt82 * 1;
        cnt82 = prev2;
        cnt82 = cnt82 * 0;
        prev2 = prev2 + v86;
        v86 = v86 + 1;
        v86 = prev2 - v86;
        if (cnt82 > 65) goto done;
        if (prev2 > 32) {
        v86 = cnt82 + cnt82;
        }
    }
done:
    cnt82 = 0;
}
int main() { test_func(); return 0; }


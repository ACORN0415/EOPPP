// RTPG_1422: vars=3 stmts=3
void test_func(void) {
    int sum12 = 43;
    int cnt63 = 18142;
    int cnt72 = 8;
    int i;
    for (i = 0; i < 67; i++) {
        cnt63 = sum12 + cnt72;
        cnt72 = cnt63 - cnt72;
        cnt72 = cnt72 + cnt63;
        if (cnt72 > 75) goto done;
    }
done:
    cnt72 = 0;
}
int main() { test_func(); return 0; }


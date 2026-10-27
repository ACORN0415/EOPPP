// RTPG_1493: vars=5 stmts=10
void test_func(void) {
    int a9 = 6;
    int val57 = -36;
    int res57 = 1;
    int dat30 = -24;
    int prev39 = 36353;
    int i;
    for (i = 0; i < 22; i++) {
        res57 = res57 + 2;
        dat30 = dat30;
        res57 = dat30 + res57;
        res57 = res57 + 4;
        res57 = res57 - val57;
        val57 = val57 + 3;
        dat30 = a9;
        prev39 = prev39 - 3;
        a9 = prev39;
        res57 = dat30 + val57;
        if (res57 > 63559) goto done;
    }
done:
    prev39 = 0;
}
int main() { test_func(); return 0; }


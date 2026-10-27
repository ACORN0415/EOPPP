// RTPG_6682: vars=4 stmts=3
void test_func(void) {
    int lo79 = 88;
    int sum55 = 29;
    int c48 = 36;
    int cur97 = 32679;
    int i;
    for (i = 0; i < 55; i++) {
        c48 = lo79 + 3;
        cur97 = cur97 + cur97;
        lo79 = sum55 + c48;
        if (lo79 > 6) goto done;
    }
done:
    sum55 = 0;
}
int main() { test_func(); return 0; }


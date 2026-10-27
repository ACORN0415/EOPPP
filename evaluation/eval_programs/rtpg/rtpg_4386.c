// RTPG_4386: vars=6 stmts=3
void test_func(void) {
    int sum92 = 27847;
    int acc24 = 22;
    int res56 = 1;
    int cur21 = 9;
    int v64 = 62697;
    int acc52 = -12;
    int i;
    for (i = 0; i < 19; i++) {
        sum92 = v64 + acc52;
        acc52 = acc52 + sum92;
        sum92 = sum92 + 5;
        if (acc24 < 18) {
        res56 = sum92;
        }
    }
}
int main() { test_func(); return 0; }


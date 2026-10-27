// RTPG_7804: vars=4 stmts=2
void test_func(void) {
    int a16 = 28;
    int out4 = 58188;
    int val60 = 7;
    int cnt42 = 70;
    int i;
    for (i = 0; i < 42; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        out4 = a16 + 1;
        val60 = val60 - 19;
        }
    }
}
int main() { test_func(); return 0; }


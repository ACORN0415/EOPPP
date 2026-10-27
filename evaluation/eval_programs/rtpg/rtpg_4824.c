// RTPG_4824: vars=3 stmts=4
void test_func(void) {
    int hi15 = 47879;
    int cur21 = 57868;
    int res50 = 98;
    int i;
    for (i = 0; i < 51; i++) {
        res50 = res50 + 4;
        cur21 = cur21 + hi15;
        hi15 = cur21;
        res50 = res50 + 5;
    }
}
int main() { test_func(); return 0; }


// RTPG_3787: vars=3 stmts=3
void test_func(void) {
    int lo56 = 1;
    int x83 = -48;
    int c52 = 38084;
    int i;
    for (i = 0; i < 52; i++) {
        c52 = x83 + 22;
        c52 = lo56 - lo56;
        c52 = c52 - 3;
    }
}
int main() { test_func(); return 0; }


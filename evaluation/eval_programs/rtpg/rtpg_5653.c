// RTPG_5653: vars=4 stmts=4
void test_func(void) {
    int v77 = 7;
    int lo41 = 6866;
    int tmp96 = 1;
    int lo47 = 3;
    int i;
    for (i = 0; i < 43; i++) {
        v77 = v77 - tmp96;
        lo47 = lo47 - lo41;
        lo41 = lo41 - 2;
        lo41 = tmp96 + v77;
    }
}
int main() { test_func(); return 0; }


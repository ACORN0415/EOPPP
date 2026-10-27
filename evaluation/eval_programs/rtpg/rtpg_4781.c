// RTPG_4781: vars=3 stmts=2
void test_func(void) {
    int x49 = 3;
    int v77 = -13;
    int x85 = 7;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 84; i++) {
        v77 = x85 + x49;
        x49 = x49 * 60;
    }
}
int main() { test_func(); return 0; }


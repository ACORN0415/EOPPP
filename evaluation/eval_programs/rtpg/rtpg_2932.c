// RTPG_2932: vars=3 stmts=2
void test_func(void) {
    int v23 = 2;
    int c27 = 25411;
    int val14 = 34;
    int i;
    for (i = 0; i < 48; i++) {
        val14 = c27 + 10;
        val14 = c27;
    }
}
int main() { test_func(); return 0; }


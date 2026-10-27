// RTPG_2961: vars=3 stmts=5
void test_func(void) {
    int cur49 = 6;
    int c89 = 79;
    int val53 = 11467;
    int i;
    for (i = 0; i < 70; i++) {
        val53 = c89 + 8;
        c89 = cur49 / val53;
        cur49 = cur49 / val53;
        val53 = c89 / cur49;
        val53 = cur49;
    }
}
int main() { test_func(); return 0; }


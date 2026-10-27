// RTPG_902: vars=4 stmts=2
void test_func(void) {
    int lo10 = 54644;
    int v44 = 1;
    int lo1 = 47;
    int z9 = 26;
    int h0 = 86;
    int sv0 = 0;
    int h1 = 55;
    int sv1 = 0;
    int i;
    for (i = 0; i < 30; i++) {
        v44 = v44 + z9;
        z9 = z9 - 5;
        if (z9 != 1) {
        lo10 = z9 - v44;
        }
    }
}
int main() { test_func(); return 0; }


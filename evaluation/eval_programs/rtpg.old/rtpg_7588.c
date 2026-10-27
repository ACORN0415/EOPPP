// RTPG_7588: vars=3 stmts=2
void test_func(void) {
    int prev0 = 41;
    int z95 = 26;
    int a52 = 59;
    int i;
    for (i = 0; i < 97; i++) {
        prev0 = prev0 + prev0;
        prev0 = z95 - prev0;
        if (prev0 < 16) {
        z95 = z95 - 5;
        }
    }
}
int main() { test_func(); return 0; }


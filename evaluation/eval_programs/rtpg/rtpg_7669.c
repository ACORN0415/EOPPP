// RTPG_7669: vars=3 stmts=2
void test_func(void) {
    int a52 = 41;
    int z95 = 26;
    int prev0 = 59;
    int i;
    for (i = 0; i < 97; i++) {
        a52 = a52 + a52;
        a52 = z95 - a52;
        if (a52 < 16) {
        z95 = z95 - 5;
        }
    }
}
int main() { test_func(); return 0; }


// RTPG_7835: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int lo10 = 17611;
    int prev59 = 54;
    int x64 = 29;
    int cnt14 = 6;
    int i;
    for (i = 0; i < 53; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        prev59 = x64;
        cnt14 = lo10 + 4;
        prev59 = cnt14 + 2;
        }
    }
}
int main() { test_func(); return 0; }


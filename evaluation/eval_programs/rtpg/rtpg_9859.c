// RTPG_9859: vars=9 stmts=6
void test_func(void) {
    int lo54 = 55;
    int out77 = 4;
    int val59 = 89;
    int acc14 = 8;
    int cur56 = 3;
    int x14 = 74;
    int x76 = 73;
    int a7 = 38896;
    int prev3 = 0;
    int i;
    for (i = 0; i < 54; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        val59 = acc14 + lo54;
        lo54 = prev3 + cur56;
        out77 = lo54 + x14;
        cur56 = out77 + 1;
        prev3 = prev3 - 2;
        out77 = a7 - out77;
        }
    }
}
int main() { test_func(); return 0; }


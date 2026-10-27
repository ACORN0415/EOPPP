// RTPG_7078: vars=4 stmts=2
void test_func(void) {
    int val86 = 5;
    int out43 = -9;
    int x60 = 54294;
    int prev54 = 21;
    int i;
    for (i = 0; i < 22; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        prev54 = prev54 - out43;
        out43 = x60;
        }
    }
}
int main() { test_func(); return 0; }


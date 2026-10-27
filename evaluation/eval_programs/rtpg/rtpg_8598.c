// RTPG_8598: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int cur13 = 5;
    int res4 = 3;
    int v88 = 6;
    int i;
    for (i = 0; i < 20; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        res4 = v88 - 47689;
        v88 = res4 + res4;
        v88 = res4 - v88;
        v88 = cur13;
        v88 = cur13 - 10;
        v88 = res4 - v88;
        v88 = cur13 + res4;
        cur13 = res4 - 44;
        }
    }
}
int main() { test_func(); return 0; }


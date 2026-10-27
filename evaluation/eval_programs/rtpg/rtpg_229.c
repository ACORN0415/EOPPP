// RTPG_229: vars=4 stmts=8
void test_func(void) {
    int z52 = 54;
    int v51 = -9;
    int cur43 = 8;
    int c28 = 30;
    int i;
    for (i = 0; i < 30; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        cur43 = z52 + cur43;
        c28 = c28 - 1;
        c28 = c28 + 3;
        c28 = z52 + z52;
        z52 = c28 + cur43;
        v51 = cur43 + 9;
        cur43 = cur43;
        cur43 = c28 - c28;
        }
    }
}
int main() { test_func(); return 0; }


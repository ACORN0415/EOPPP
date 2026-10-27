// RTPG_228: vars=4 stmts=8
void test_func(void) {
    int c28 = 54;
    int cur43 = -9;
    int v51 = 8;
    int z52 = 30;
    int i;
    for (i = 0; i < 30; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        v51 = c28 + v51;
        z52 = z52 - 1;
        z52 = z52 + 3;
        z52 = c28 + c28;
        c28 = z52 + v51;
        cur43 = v51 + 9;
        v51 = v51;
        v51 = z52 - z52;
        }
    }
}
int main() { test_func(); return 0; }


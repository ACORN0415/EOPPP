// RTPG_5408: vars=3 stmts=4
void test_func(void) {
    int tmp25 = 69;
    int cur70 = 10;
    int cur11 = -31;
    int h0 = 19;
    int sv0 = 0;
    int h1 = 54416;
    int sv1 = 0;
    int i;
    for (i = 0; i < 48; i++) {
        cur11 = cur70 + cur11;
        cur11 = cur11 - 3;
        cur11 = cur70 - 2;
        cur70 = cur70;
        if (cur70 == -11) {
        cur11 = cur11 - 5;
        }
    }
}
int main() { test_func(); return 0; }


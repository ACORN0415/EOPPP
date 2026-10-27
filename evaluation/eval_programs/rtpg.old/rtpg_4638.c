// RTPG_4638: vars=4 stmts=2
void test_func(void) {
    int res21 = 7;
    int x75 = 3143;
    int y45 = 30;
    int cnt16 = 70;
    int h0 = 80;
    int sv0 = 0;
    int h1 = 9259;
    int sv1 = 0;
    int i;
    for (i = 0; i < 79; i++) {
        x75 = y45;
        x75 = cnt16 - x75;
        if (x75 > -3) {
        res21 = x75 - -42;
        }
    }
}
int main() { test_func(); return 0; }


// RTPG_2497: vars=5 stmts=4
void test_func(void) {
    int dat18 = 46827;
    int x48 = 35437;
    int cur96 = -5;
    int v46 = 18;
    int cur97 = 9;
    int i;
    for (i = 0; i < 20; i++) {
        cur96 = cur96 + x48;
        cur96 = cur96 - 3;
        x48 = dat18 + x48;
        dat18 = dat18;
        if (dat18 == 88) {
        x48 = x48 + 4;
        }
    }
}
int main() { test_func(); return 0; }


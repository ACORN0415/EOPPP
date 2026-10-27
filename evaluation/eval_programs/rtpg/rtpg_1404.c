// RTPG_1404: vars=3 stmts=6
void test_func(void) {
    int z92 = 8;
    int a97 = 2;
    int cnt45 = 58512;
    int i;
    for (i = 0; i < 62; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        z92 = a97;
        cnt45 = z92;
        z92 = cnt45 + a97;
        a97 = z92 - cnt45;
        a97 = a97 + 3;
        cnt45 = cnt45 + a97;
        }
    }
}
int main() { test_func(); return 0; }


// RTPG_1660: vars=3 stmts=8
void test_func(void) {
    int dat37 = 37659;
    int x32 = -8;
    int a3 = 18717;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 79;
    int sv1 = 0;
    int i;
    for (i = 0; i < 85; i++) {
        a3 = dat37 * 84;
        x32 = dat37 * 3;
        x32 = x32 * 38;
        a3 = dat37 % dat37;
        x32 = x32 | x32;
        a3 = dat37 % a3;
        a3 = dat37 * 3;
        x32 = x32 * 10;
    }
}
int main() { test_func(); return 0; }


// RTPG_9096: vars=3 stmts=2
int xn[16];
int yo[16];
enum State { ON, SLOW, GREEN };
void test_func(void) {
    int c81 = 60114;
    int lo72 = -26;
    int x30 = 0;
    enum State st = ON;
    int h0 = 39296;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 69; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        x30 = x30 - c81;
        c81 = c81 + x30;
        }
    }
}
int main() { test_func(); return 0; }


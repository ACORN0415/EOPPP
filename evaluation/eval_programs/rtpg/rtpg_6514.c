// RTPG_6514: vars=4 stmts=3
enum State { OFF, GREEN, BLUE };
void test_func(void) {
    int out43 = 6;
    int x95 = 1;
    int sum34 = 13;
    int out5 = 17557;
    enum State st = OFF;
    int i;
    for (i = 0; i < 33; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        out43 = x95 + out5;
        x95 = out43 + out43;
        out5 = sum34 + 10;
        }
    }
}
int main() { test_func(); return 0; }


// RTPG_8066: vars=10 stmts=12
enum State { RED, GREEN, ON };
void test_func(void) {
    int b49 = -25;
    int val38 = 53022;
    int out21 = 10;
    int x27 = -1;
    int y33 = 41283;
    int b51 = 0;
    int y37 = 90;
    int out13 = 43;
    int acc67 = -1;
    int cnt68 = 3;
    enum State st = RED;
    int i;
    for (i = 0; i < 90; i++) {
        y33 = y33 + 4;
        y37 = out13 + y33;
        val38 = val38 + 1;
        y37 = b51 + cnt68;
        y37 = b49 + y37;
        out21 = out21 + 4;
        x27 = y37;
        y37 = val38;
        cnt68 = cnt68 - x27;
        y37 = acc67 + -23;
        out21 = b51 + acc67;
        cnt68 = b49 + cnt68;
        if (val38 < 19) {
        cnt68 = y33 + 9;
        }
    }
}
int main() { test_func(); return 0; }


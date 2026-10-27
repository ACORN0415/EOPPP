// RTPG_5724: vars=8 stmts=8
int xn[32];
int yo[32];
enum State { SLOW, BLUE, ON };
void test_func(void) {
    int tmp64 = 90;
    int hi39 = 86;
    int x52 = -34;
    int res9 = 20;
    int out15 = 47;
    int tmp76 = 21152;
    int out81 = 9813;
    int val51 = 7;
    enum State st = SLOW;
    int h0 = 32961;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 22844;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out81 = xn[i];
        res9 = x52;
        res9 = tmp76 - hi39;
        x52 = out15 * 25;
        val51 = val51 + 1;
        val51 = val51 + 4;
        val51 = out15 - -1;
        val51 = x52 - 80;
        hi39 = hi39 + 2;
        if (res9 <= -8) {
        res9 = tmp64 + out81;
        }
        yo[i] = res9;
    }
}
int main() { test_func(); return 0; }


// RTPG_5824: vars=8 stmts=8
int xn[32];
int yo[32];
enum State { SLOW, BLUE, ON };
void test_func(void) {
    int res9 = 90;
    int x52 = 86;
    int hi39 = -34;
    int tmp76 = 20;
    int out15 = 47;
    int val51 = 21152;
    int tmp64 = 9813;
    int out81 = 7;
    enum State st = SLOW;
    int h0 = 32961;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 22844;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp64 = xn[i];
        tmp76 = hi39;
        tmp76 = val51 - x52;
        hi39 = out15 * 25;
        out81 = out81 + 1;
        out81 = out81 + 4;
        out81 = out15 - -1;
        out81 = hi39 - 80;
        x52 = x52 + 2;
        if (tmp76 <= -8) {
        tmp76 = res9 + tmp64;
        }
        yo[i] = tmp76;
    }
}
int main() { test_func(); return 0; }


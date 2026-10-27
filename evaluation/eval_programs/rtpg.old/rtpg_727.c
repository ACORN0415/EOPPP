// RTPG_727: vars=8 stmts=2
int xn[64];
int yo[64];
enum State { ON, SLOW, FAST };
void test_func(void) {
    int v23 = 27;
    int res68 = 64035;
    int cnt91 = 52683;
    int out90 = -22;
    int a77 = 1;
    int prev57 = 10;
    int lo13 = 61786;
    int v59 = 50481;
    enum State st = ON;
    int i;
    for (i = 0; i < 64; i++) {
        res68 = xn[i];
        v23 = lo13 + res68;
        v23 = v23 + 1;
        if (cnt91 <= 41) {
        v23 = a77 - v59;
        }
        yo[i] = v23;
    }
}
int main() { test_func(); return 0; }


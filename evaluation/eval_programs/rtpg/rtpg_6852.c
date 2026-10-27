// RTPG_6852: vars=6 stmts=7
int xn[64];
int yo[64];
struct Node { int a; int b; };
void test_func(void) {
    float tmp51 = 12.69;
    int acc95 = 10;
    float cnt27 = 86.94;
    float cnt21 = 36.27;
    int lo48 = 9;
    int prev45 = 66;
    struct Node s; s.a = 2; s.b = 53028;
    int i;
    for (i = 0; i < 64; i++) {
        prev45 = xn[i];
        lo48 = prev45 + acc95;
        tmp51 = tmp51 + 4;
        tmp51 = tmp51 - 3;
        cnt21 = cnt21;
        cnt27 = prev45 - cnt27;
        prev45 = prev45;
        cnt27 = prev45 + 44;
        s.a = s.a + s.b;
        if (lo48 != 49) {
        cnt21 = lo48 + prev45;
        }
        yo[i] = acc95;
    }
}
int main() { test_func(); return 0; }


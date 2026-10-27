// RTPG_7532: vars=7 stmts=7
int xn[64];
int yo[64];
enum State { FAST, BLUE, OFF };
void test_func(void) {
    int cur31 = 63;
    int res72 = 38;
    int lo80 = 49508;
    int c5 = -11;
    int res21 = 63879;
    int sum53 = 7;
    int val43 = 86;
    enum State st = FAST;
    int h0 = 70;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        c5 = xn[i];
        sum53 = c5 + res72;
        c5 = res21 * 86;
        cur31 = cur31 + sum53;
        res21 = res21 + 10;
        lo80 = lo80 * 91;
        lo80 = c5 - lo80;
        lo80 = cur31 + c5;
        if (sum53 < 100) {
        c5 = cur31 - 1;
        }
        yo[i] = lo80;
    }
}
int main() { test_func(); return 0; }


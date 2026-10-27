// RTPG_9579: vars=6 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int a66 = -38;
    int out8 = 63;
    int v35 = 49;
    int sum53 = 0;
    int prev49 = 29;
    int y12 = 47441;
    int h0 = 28;
    int sv0 = 0;
    int h1 = 23209;
    int sv1 = 0;
    int h2 = 58255;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y12 = xn[i];
        out8 = v35;
        sum53 = v35 - a66;
        sum53 = out8 * -7;
        v35 = v35 - 4;
        a66 = sum53 - prev49;
        y12 = y12 + 2;
        prev49 = y12 * 12;
        y12 = y12 - out8;
        v35 = out8 - v35;
        out8 = v35 - 60;
        y12 = y12 + 2;
        if (sum53 != 59) {
        a66 = prev49 + prev49;
        }
        yo[i] = a66;
    }
}
int main() { test_func(); return 0; }


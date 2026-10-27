// RTPG_9775: vars=6 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int prev49 = -38;
    int v35 = 63;
    int out8 = 49;
    int y12 = 0;
    int sum53 = 29;
    int a66 = 47441;
    int h0 = 28;
    int sv0 = 0;
    int h1 = 23209;
    int sv1 = 0;
    int h2 = 58255;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a66 = xn[i];
        v35 = out8;
        y12 = out8 - prev49;
        y12 = v35 * -7;
        out8 = out8 - 4;
        prev49 = y12 - sum53;
        a66 = a66 + 2;
        sum53 = a66 * 12;
        a66 = a66 - v35;
        out8 = v35 - out8;
        v35 = out8 - 60;
        a66 = a66 + 2;
        if (y12 != 59) {
        prev49 = sum53 + sum53;
        }
        yo[i] = prev49;
    }
}
int main() { test_func(); return 0; }


// RTPG_5721: vars=5 stmts=3
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int sum53 = -24;
    int z24 = 3;
    int val55 = 32;
    int z46 = -6;
    int z62 = 7;
    int h0 = 50;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        z62 = xn[i];
        z46 = xn[idx_arr[i]];
        z62 = sum53 * 23035;
        z46 = val55 * 5;
        z46 = z62 * 13;
        yo[i] = z24;
    }
}
int main() { test_func(); return 0; }


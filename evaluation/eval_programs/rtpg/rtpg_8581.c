// RTPG_8581: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int hi98 = 4;
    int cur73 = 2;
    int cur64 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        hi98 = xn[i];
        hi98 = cur64 - cur64;
        cur64 = cur64 + 2;
        cur64 = cur64;
        cur64 = cur64;
        cur73 = cur73 - 4;
        yo[i] = cur64;
    }
}
int main() { test_func(); return 0; }


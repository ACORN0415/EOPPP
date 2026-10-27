// RTPG_5647: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int sum69 = 6;
    int dat76 = 44;
    int sum32 = 9;
    int cnt38 = 24;
    int i;
    for (i = 0; i < 16; i++) {
        sum69 = xn[i];
        sum32 = sum69 + cnt38;
        sum69 = sum32 + 44424;
        sum32 = sum32 - 65;
        sum69 = sum69 + 1;
        sum32 = sum32 + 19;
        yo[i] = sum32;
    }
}
int main() { test_func(); return 0; }


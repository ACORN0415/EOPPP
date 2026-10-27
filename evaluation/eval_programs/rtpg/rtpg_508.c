// RTPG_508: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int z71 = 64;
    double x78 = 55.74;
    int res54 = 31;
    int x60 = 9;
    int prev55 = 5;
    int sum10 = 13;
    int *ptr = &z71;
    int i;
    for (i = 0; i < 64; i++) {
        sum10 = xn[i];
        prev55 = z71 - sum10;
        prev55 = prev55 + 3;
        res54 = res54 + z71;
        prev55 = x60 + x60;
        x60 = sum10;
        *ptr = *ptr + 3;
        yo[i] = x78;
    }
}
int main() { test_func(); return 0; }


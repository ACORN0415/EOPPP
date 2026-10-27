// RTPG_693: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int cur13 = 4;
    int z26 = 58066;
    int tmp2 = 4326;
    int val29 = 26677;
    int cnt60 = 8;
    int tmp71 = 64396;
    int *ptr = &cnt60;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 36340;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cnt60 = xn[i];
        tmp71 = val29;
        val29 = tmp71 * 24963;
        z26 = z26 + 1;
        tmp71 = cur13 - z26;
        *ptr = *ptr + 1;
        yo[i] = tmp2;
    }
}
int main() { test_func(); return 0; }


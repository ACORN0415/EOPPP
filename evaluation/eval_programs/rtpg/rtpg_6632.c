// RTPG_6632: vars=5 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int x0 = 70;
    int z24 = 44342;
    int out39 = 68;
    int cur34 = 4;
    int y74 = 12;
    int i;
    for (i = 0; i < 32; i++) {
        y74 = xn[i];
        x0 = x0 - 3;
        z24 = y74 + cur34;
        out39 = x0 - z24;
        z24 = cur34;
        x0 = x0 - out39;
        out39 = out39;
        cur34 = out39 + x0;
        if (x0 != 90) {
        z24 = z24 - 3;
        }
        yo[i] = out39;
    }
}
int main() { test_func(); return 0; }


// RTPG_6566: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int lo96 = 24;
    int z7 = 1;
    int hi2 = 4;
    int lo54 = -18;
    int cnt67 = 10;
    int x63 = 18;
    int cur14 = -21;
    int y54 = 8;
    int c80 = 45;
    int i;
    for (i = 0; i < 64; i++) {
        x63 = xn[i];
        cnt67 = cnt67 - 31;
        y54 = x63 - lo96;
        lo54 = lo96 - y54;
        cur14 = cur14 + 1;
        z7 = lo54 - 2;
        yo[i] = z7;
    }
}
int main() { test_func(); return 0; }


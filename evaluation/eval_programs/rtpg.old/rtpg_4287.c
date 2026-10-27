// RTPG_4287: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int sum37 = -12;
    int sum92 = 20434;
    int cnt91 = 38174;
    int v73 = 7;
    int out5 = 45931;
    int i;
    for (i = 0; i < 64; i++) {
        sum92 = xn[i];
        sum37 = cnt91 - out5;
        v73 = sum92 - 5;
        cnt91 = cnt91 - 4;
        sum92 = cnt91;
        cnt91 = sum37 + 85;
        cnt91 = sum92 + out5;
        cnt91 = v73 + sum92;
        cnt91 = cnt91 - cnt91;
        if (cnt91 > 16) {
        sum92 = sum92 + 2;
        }
        yo[i] = out5;
    }
}
int main() { test_func(); return 0; }


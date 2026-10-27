// RTPG_9528: vars=3 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int cnt95 = 10;
    int v6 = 28040;
    int sum97 = 40;
    int i;
    for (i = 0; i < 64; i++) {
        sum97 = xn[i];
        sum97 = sum97 + cnt95;
        sum97 = v6;
        sum97 = sum97 - 25;
        sum97 = cnt95 - sum97;
        cnt95 = v6 - sum97;
        sum97 = v6 + 8;
        cnt95 = cnt95 + sum97;
        sum97 = v6;
        if (v6 != -6) {
        cnt95 = cnt95 + sum97;
        }
        yo[i] = sum97;
    }
}
int main() { test_func(); return 0; }


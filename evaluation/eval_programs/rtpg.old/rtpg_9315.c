// RTPG_9315: vars=4 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int tmp83 = 10;
    int cnt60 = 62815;
    float lo60 = 89.40;
    float cnt7 = 51.22;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp83 = xn[i];
        cnt60 = cnt60 + 2;
        lo60 = cnt60 - 24;
        tmp83 = tmp83 - 2;
        tmp83 = cnt7;
        tmp83 = lo60 * -25;
        lo60 = tmp83 * 3;
        lo60 = lo60 + 2;
        cnt60 = cnt7 - tmp83;
        if (cnt60 >= -43) {
        cnt60 = tmp83 + 9;
        }
        yo[i] = lo60;
    }
}
int main() { test_func(); return 0; }


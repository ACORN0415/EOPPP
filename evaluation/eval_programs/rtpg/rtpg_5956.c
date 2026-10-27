// RTPG_5956: vars=6 stmts=4
void test_func(void) {
    int x68 = 19170;
    int cnt60 = 2;
    int cur56 = 8;
    int prev54 = 3;
    int tmp69 = 8;
    int cur4 = 6;
    int i;
    for (i = 0; i < 27; i++) {
        x68 = cnt60 + x68;
        tmp69 = cnt60 - -34;
        x68 = prev54 + tmp69;
        cur56 = x68 + cur56;
    }
}
int main() { test_func(); return 0; }


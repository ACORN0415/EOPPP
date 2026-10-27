// RTPG_9770: vars=3 stmts=8
void test_func(void) {
    int prev98 = 59267;
    int v97 = -50;
    int x2 = -36;
    int i;
    for (i = 0; i < 50; i++) {
        prev98 = v97 + x2;
        prev98 = x2 + x2;
        x2 = prev98;
        x2 = prev98 + x2;
        x2 = x2 - x2;
        x2 = v97 + prev98;
        prev98 = x2 - v97;
        v97 = x2;
        if (x2 <= -32) {
        x2 = x2 - 84;
        }
    }
}
int main() { test_func(); return 0; }


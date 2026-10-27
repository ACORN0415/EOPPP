// RTPG_531: vars=3 stmts=3
void test_func(void) {
    int x53 = 16777;
    int cur63 = 3;
    int cnt6 = -30;
    int i;
    for (i = 0; i < 64; i++) {
        x53 = cnt6 - x53;
        x53 = x53 - cur63;
        cur63 = x53;
        if (cur63 == 55) {
        x53 = cur63 + 36909;
        }
    }
}
int main() { test_func(); return 0; }


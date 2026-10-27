// RTPG_2412: vars=4 stmts=2
void test_func(void) {
    int cur51 = 1857;
    int x85 = 84;
    int v29 = 14;
    int prev44 = 5;
    int i;
    for (i = 0; i < 8; i++) {
        x85 = v29 - x85;
        prev44 = x85 - cur51;
    }
}
int main() { test_func(); return 0; }


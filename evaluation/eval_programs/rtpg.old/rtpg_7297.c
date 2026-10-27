// RTPG_7297: vars=4 stmts=5
void test_func(void) {
    int res99 = 30;
    int cnt77 = 4;
    int acc6 = 9;
    int prev63 = 35;
    int h0 = 0;
    int sv0 = 0;
    int h1 = -32;
    int sv1 = 0;
    int i;
    for (i = 0; i < 7; i++) {
        prev63 = acc6 * 35061;
        prev63 = prev63 + 5;
        cnt77 = prev63 + 25;
        cnt77 = prev63 - 9;
        cnt77 = cnt77 - prev63;
    }
}
int main() { test_func(); return 0; }


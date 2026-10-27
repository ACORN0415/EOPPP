// RTPG_431: vars=4 stmts=2
void test_func(void) {
    int y4 = 8;
    int y96 = 63;
    int lo75 = 6;
    int prev28 = 13566;
    int i;
    for (i = 0; i < 40; i++) {
        y96 = prev28 + y96;
        lo75 = y4 - prev28;
    }
}
int main() { test_func(); return 0; }


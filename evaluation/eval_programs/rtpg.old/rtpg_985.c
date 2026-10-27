// RTPG_985: vars=4 stmts=4
void test_func(void) {
    int tmp42 = -40;
    int a10 = 53461;
    int prev19 = -11;
    int cur60 = 8;
    int i;
    for (i = 0; i < 62; i++) {
        a10 = prev19;
        cur60 = prev19 + cur60;
        cur60 = a10 - cur60;
        tmp42 = prev19 + a10;
        if (tmp42 < 44) {
        prev19 = tmp42 + prev19;
        }
    }
}
int main() { test_func(); return 0; }


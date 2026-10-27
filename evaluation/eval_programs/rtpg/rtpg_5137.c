// RTPG_5137: vars=4 stmts=5
void test_func(void) {
    int x87 = 95;
    int lo85 = 10731;
    int prev46 = 0;
    int sum86 = 28;
    int i;
    for (i = 0; i < 72; i++) {
        lo85 = lo85 - 99;
        x87 = lo85 + 27924;
        lo85 = lo85 - 1;
        x87 = lo85 + x87;
        prev46 = lo85 + prev46;
    }
}
int main() { test_func(); return 0; }


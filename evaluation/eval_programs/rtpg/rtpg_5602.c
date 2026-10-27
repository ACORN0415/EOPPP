// RTPG_5602: vars=7 stmts=11
void test_func(void) {
    float cur62 = 69.40;
    float lo23 = 41.37;
    int x8 = 8;
    int v7 = 1;
    int b52 = 47441;
    int prev30 = 55;
    double acc85 = 8.26;
    int h0 = 4;
    int sv0 = 0;
    int h1 = -28;
    int sv1 = 0;
    int i;
    for (i = 0; i < 94; i++) {
        v7 = acc85 + prev30;
        prev30 = acc85 - 3;
        cur62 = acc85;
        acc85 = b52 * 3;
        cur62 = cur62 - 5;
        cur62 = cur62 + 1;
        v7 = lo23 + cur62;
        prev30 = lo23 * 2;
        cur62 = b52 - lo23;
        b52 = b52 + 5;
        x8 = prev30;
    }
}
int main() { test_func(); return 0; }


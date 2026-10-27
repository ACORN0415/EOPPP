// RTPG_7843: vars=6 stmts=7
void test_func(void) {
    int v56 = 61219;
    int hi19 = 25;
    int acc42 = 47;
    int res56 = 38;
    int val97 = 98;
    int c48 = 52940;
    int h0 = 54518;
    int sv0 = 0;
    int h1 = 47;
    int sv1 = 0;
    int h2 = 47;
    int sv2 = 0;
    int i;
    for (i = 0; i < 21; i++) {
        res56 = v56 ^ acc42;
        val97 = v56;
        hi19 = hi19 - 3;
        v56 = res56 + 70;
        acc42 = acc42 + 4;
        acc42 = res56 / acc42;
        c48 = acc42 + hi19;
    }
}
int main() { test_func(); return 0; }


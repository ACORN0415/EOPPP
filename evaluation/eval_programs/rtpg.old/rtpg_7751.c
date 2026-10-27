// RTPG_7751: vars=6 stmts=7
void test_func(void) {
    int c48 = 61219;
    int val97 = 25;
    int acc42 = 47;
    int res56 = 38;
    int v56 = 98;
    int hi19 = 52940;
    int h0 = 54518;
    int sv0 = 0;
    int h1 = 47;
    int sv1 = 0;
    int h2 = 47;
    int sv2 = 0;
    int i;
    for (i = 0; i < 21; i++) {
        res56 = c48 ^ val97;
        v56 = c48;
        val97 = val97 - 3;
        c48 = res56 + 70;
        acc42 = acc42 + 4;
        c48 = res56 ^ hi19;
        acc42 = acc42 + val97;
    }
}
int main() { test_func(); return 0; }


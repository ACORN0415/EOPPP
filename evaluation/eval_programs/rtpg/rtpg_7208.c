// RTPG_7208: vars=12 stmts=5
int xn[64];
int yo[64];
enum State { RED, OFF, BLUE };
void test_func(void) {
    int res66 = 65;
    int out18 = 0;
    int acc72 = 51;
    int res52 = 3;
    int v33 = 21;
    int val2 = 17;
    int c33 = 3;
    int cnt7 = 32;
    int a98 = 0;
    int acc73 = 97;
    int lo20 = 4;
    int v65 = 7;
    enum State st = RED;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 36;
    int sv1 = 0;
    int h2 = 36;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res66 = xn[i];
        v33 = res52 + 4;
        acc73 = out18 * 47;
        res52 = res66 % a98;
        val2 = v33;
        v65 = lo20 ^ v33;
        yo[i] = c33;
    }
}
int main() { test_func(); return 0; }


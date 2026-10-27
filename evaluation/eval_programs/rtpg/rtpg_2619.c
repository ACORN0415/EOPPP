// RTPG_2619: vars=4 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    double val73 = 30.28;
    int c55 = 6;
    int out20 = 9;
    int val57 = 30424;
    int i;
    for (i = 0; i < 32; i++) {
        val57 = xn[i];
        val57 = val73 + c55;
        c55 = val57 - c55;
        val57 = val57 - 5;
        val57 = val57 + c55;
        val57 = out20 - 89;
        val57 = out20 - 24;
        val73 = out20 - 81;
        if (val73 < 97) {
        out20 = val73 + c55;
        }
        yo[i] = c55;
    }
}
int main() { test_func(); return 0; }


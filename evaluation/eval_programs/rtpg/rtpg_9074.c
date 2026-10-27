// RTPG_9074: vars=10 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int hi91 = -47;
    int x3 = 95;
    int prev87 = 9;
    int z54 = 36;
    int out49 = 1;
    int prev47 = 2;
    int out47 = 50;
    int acc85 = 8;
    int y86 = 8;
    int c4 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        c4 = xn[i];
        prev87 = acc85 + c4;
        out47 = c4 + 51;
        yo[i] = out47;
    }
}
int main() { test_func(); return 0; }


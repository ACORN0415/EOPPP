// RTPG_6954: vars=7 stmts=4
void test_func(void) {
    int acc93 = 17;
    int v58 = -17;
    int x43 = 62242;
    int c68 = 47296;
    double val82 = 62.02;
    int hi29 = 6330;
    int v79 = 10;
    int *ptr = &x43;
    int i;
    for (i = 0; i < 52; i++) {
        v79 = acc93 & v58;
        val82 = v58 ^ c68;
        c68 = acc93 - c68;
        c68 = v79 | acc93;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }


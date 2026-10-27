// RTPG_9574: vars=4 stmts=6
void test_func(void) {
    int acc12 = 6289;
    int c34 = -27;
    int v18 = 15627;
    int y16 = 71;
    int h0 = 35395;
    int sv0 = 0;
    int h1 = -39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 39; i++) {
        switch (acc12) {
            case 0: acc12 = 47; break;
            case 1: c34 = 41; break;
            default: break;
        }
        acc12 = acc12 + 1;
    }
}
int main() { test_func(); return 0; }


// RTPG_1796: vars=4 stmts=4
void test_func(void) {
    int z25 = 8628;
    int v1 = 6;
    int v47 = 2;
    int cnt90 = 39;
    int *ptr = &z25;
    int h0 = 44079;
    int sv0 = 0;
    int h1 = 57;
    int sv1 = 0;
    int i;
    for (i = 0; i < 41; i++) {
        switch (cnt90) {
            case 0: z25 = 9; break;
            case 1: v1 = 51; break;
            case 2: v47 = -47; break;
            default: break;
        }
        cnt90 = cnt90 + 1;
    }
}
int main() { test_func(); return 0; }


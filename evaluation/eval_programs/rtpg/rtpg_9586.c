// RTPG_9586: vars=4 stmts=8
void test_func(void) {
    int prev22 = -32;
    int res47 = 8;
    int hi91 = 42529;
    int b92 = 3;
    int h0 = 94;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 29; i++) {
        switch (prev22) {
            case 0: b92 = 83; break;
            case 1: hi91 = 26; break;
            case 2: hi91 = 1; break;
            default: break;
        }
        prev22 = prev22 + 1;
    }
}
int main() { test_func(); return 0; }


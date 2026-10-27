// RTPG_3706: vars=5 stmts=3
void test_func(void) {
    int lo80 = 5;
    int lo32 = 12424;
    int val68 = 47;
    int a57 = -27;
    int z51 = 43;
    int h0 = 49;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        lo32 = lo80 + lo80;
        val68 = lo80 - 65146;
        val68 = z51;
    }
}
int main() { test_func(); return 0; }


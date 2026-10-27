// RTPG_5064: vars=4 stmts=5
void test_func(void) {
    int cur99 = 38;
    int cnt31 = 18022;
    int val21 = 22;
    int v60 = 37631;
    int h0 = 44;
    int sv0 = 0;
    int h1 = 41964;
    int sv1 = 0;
    int i;
    for (i = 0; i < 11; i++) {
        cnt31 = val21;
        val21 = val21 + 5;
        cnt31 = cnt31 * 13;
        val21 = val21 + 4;
        cnt31 = val21 * 85;
    }
}
int main() { test_func(); return 0; }


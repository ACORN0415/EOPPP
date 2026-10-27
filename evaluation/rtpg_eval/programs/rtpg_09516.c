int test_func(void) {
    int v0 = 10;
    int v1 = 18;
    int v2 = 30;
    int v3 = 40;
    int v4 = 16;
    int v5 = 64;
    int v6 = 64;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    if (v5 > v5) { v5 = v5; }
    v0 = v0 + v5;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 10;
    int v1 = 13;
    int v2 = 44;
    int v3 = 64;
    int v4 = 20;
    int v5 = 48;
    int v6 = 90;
    int v7 = 43;
    int i;
    if (v5 > v2) { v5 = v2; }
    v6 = 49;
    for (i = 0; i < 18; i++) {
        v7 = v7 + v7;
    }
    return v0;
}
int main(void) { return test_func(); }

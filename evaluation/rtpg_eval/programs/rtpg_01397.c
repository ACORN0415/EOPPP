int test_func(void) {
    int v0 = 64;
    int v1 = 56;
    int v2 = 30;
    int v3 = 78;
    int v4 = 18;
    int v5 = 53;
    int v6 = 60;
    int i;
    if (v5 > v1) { v5 = v1; }
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }

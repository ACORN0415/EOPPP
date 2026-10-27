int test_func(void) {
    int v0 = 49;
    int v1 = 1;
    int v2 = 64;
    int v3 = 9;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    if (v3 > v2) { v3 = v2; }
    v3 = v3 ^ v2;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 32;
    int v1 = 0;
    int v2 = 56;
    int v3 = 6;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 14; i++) {
        v1 = v1 + v3;
    }
    v3 = 28;
    return v0;
}
int main(void) { return test_func(); }

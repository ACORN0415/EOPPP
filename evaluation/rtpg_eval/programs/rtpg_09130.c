int test_func(void) {
    int v0 = 76;
    int v1 = 18;
    int v2 = 86;
    int v3 = 63;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v2;
    }
    if (v3 > v2) { v3 = v2; }
    v3 = 13;
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }

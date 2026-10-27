int test_func(void) {
    int v0 = 74;
    int v1 = 87;
    int v2 = 53;
    int v3 = 93;
    int i;
    v2 = 39;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v1;
    }
    if (v3 > v1) { v3 = v1; }
    return v0;
}
int main(void) { return test_func(); }

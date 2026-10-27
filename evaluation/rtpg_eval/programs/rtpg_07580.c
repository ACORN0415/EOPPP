int test_func(void) {
    int v0 = 49;
    int v1 = 64;
    int v2 = 36;
    int v3 = 27;
    int v4 = 64;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v0;
    }
    if (v1 > v2) { v1 = v2; }
    v4 = v4 + v1;
    v4 = v4 - v0;
    return v0;
}
int main(void) { return test_func(); }

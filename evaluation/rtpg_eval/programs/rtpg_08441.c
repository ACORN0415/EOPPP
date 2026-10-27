int test_func(void) {
    int v0 = 64;
    int v1 = 58;
    int v2 = 22;
    int v3 = 39;
    int v4 = 31;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 15; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }

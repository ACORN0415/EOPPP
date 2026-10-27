int test_func(void) {
    int v0 = 46;
    int v1 = 68;
    int v2 = 78;
    int v3 = 23;
    int v4 = 39;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 15; i++) {
        v0 = v0 + v3;
    }
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }

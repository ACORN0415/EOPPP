int test_func(void) {
    int v0 = 45;
    int v1 = 24;
    int v2 = 15;
    int v3 = 11;
    int v4 = 31;
    int i;
    v1 = v1 + v4;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 16; i++) {
        v4 = v4 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

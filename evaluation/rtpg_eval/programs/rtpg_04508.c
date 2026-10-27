int test_func(void) {
    int v0 = 50;
    int v1 = 86;
    int v2 = 18;
    int v3 = 7;
    int v4 = 70;
    int i;
    if (v4 > v0) { v4 = v0; }
    v1 = 43;
    v3 = v3 + v4;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

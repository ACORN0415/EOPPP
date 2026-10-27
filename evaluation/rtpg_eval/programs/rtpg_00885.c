int test_func(void) {
    int v0 = 16;
    int v1 = 17;
    int v2 = 36;
    int v3 = 20;
    int v4 = 65;
    int v5 = 75;
    int i;
    if (v0 > v3) { v0 = v3; }
    v3 = v3 + v0;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }

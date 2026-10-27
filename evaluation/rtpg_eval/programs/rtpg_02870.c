int test_func(void) {
    int v0 = 18;
    int v1 = 15;
    int v2 = 49;
    int v3 = 43;
    int v4 = 30;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v3;
    v2 = v2 - v0;
    if (v1 > v4) { v1 = v4; }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 6;
    int v1 = 16;
    int v2 = 63;
    int i;
    v1 = v1 + v2;
    if (v2 > v0) { v2 = v0; }
    v0 = 53;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

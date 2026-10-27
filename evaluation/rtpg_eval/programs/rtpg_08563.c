int test_func(void) {
    int v0 = 7;
    int v1 = 10;
    int v2 = 27;
    int v3 = 61;
    int v4 = 39;
    int v5 = 64;
    int i;
    if (v4 > v5) { v4 = v5; }
    v0 = v0 + v1;
    v2 = 70;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

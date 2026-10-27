int test_func(void) {
    int v0 = 23;
    int v1 = 3;
    int v2 = 7;
    int v3 = 33;
    int v4 = 30;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    if (v1 > v1) { v1 = v1; }
    v2 = v2 - v4;
    return v0;
}
int main(void) { return test_func(); }

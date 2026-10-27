int test_func(void) {
    int v0 = 49;
    int v1 = 5;
    int v2 = 28;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }

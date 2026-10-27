int test_func(void) {
    int v0 = 23;
    int v1 = 64;
    int v2 = 76;
    int i;
    if (v1 > v1) { v1 = v1; }
    v1 = v1 + v1;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

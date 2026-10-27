int test_func(void) {
    int v0 = 47;
    int v1 = 37;
    int v2 = 19;
    int v3 = 42;
    int v4 = 31;
    int i;
    v2 = v2 - v0;
    v1 = 42;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

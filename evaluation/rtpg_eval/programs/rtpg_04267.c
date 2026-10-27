int test_func(void) {
    int v0 = 29;
    int v1 = 54;
    int v2 = 59;
    int v3 = 82;
    int v4 = 12;
    int v5 = 56;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    if (v0 > v0) { v0 = v0; }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 80;
    int v1 = 68;
    int v2 = 44;
    int i;
    if (v1 > v0) { v1 = v0; }
    v2 = 14;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

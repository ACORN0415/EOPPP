int test_func(void) {
    int v0 = 60;
    int v1 = 51;
    int v2 = 11;
    int v3 = 96;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }

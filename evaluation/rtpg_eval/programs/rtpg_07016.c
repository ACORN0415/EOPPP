int test_func(void) {
    int v0 = 28;
    int v1 = 16;
    int v2 = 76;
    int v3 = 92;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 76;
    int v1 = 61;
    int v2 = 70;
    int v3 = 92;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 46;
    int v1 = 45;
    int v2 = 80;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v1;
    }
    v1 = 67;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 7;
    int v1 = 41;
    int v2 = 17;
    int i;
    v1 = v1 + v1;
    v1 = v1 - v2;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

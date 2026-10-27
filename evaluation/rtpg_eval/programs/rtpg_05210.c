int test_func(void) {
    int v0 = 65;
    int v1 = 94;
    int v2 = 83;
    int i;
    v2 = v2 * 10;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }

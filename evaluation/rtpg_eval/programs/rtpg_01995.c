int test_func(void) {
    int v0 = 87;
    int v1 = 38;
    int v2 = 98;
    int v3 = 94;
    int i;
    v3 = 95;
    v2 = v2 + v0;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 23;
    int v1 = 98;
    int v2 = 52;
    int v3 = 33;
    int v4 = 5;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 * 7;
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }

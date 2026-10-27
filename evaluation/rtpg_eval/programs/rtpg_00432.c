int test_func(void) {
    int v0 = 9;
    int v1 = 6;
    int v2 = 17;
    int v3 = 69;
    int v4 = 33;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

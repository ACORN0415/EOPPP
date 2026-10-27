int test_func(void) {
    int v0 = 54;
    int v1 = 66;
    int v2 = 27;
    int i;
    v2 = v2 - v0;
    v2 = v2 + v0;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

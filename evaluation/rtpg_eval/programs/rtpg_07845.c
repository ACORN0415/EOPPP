int test_func(void) {
    int v0 = 77;
    int v1 = 7;
    int v2 = 9;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

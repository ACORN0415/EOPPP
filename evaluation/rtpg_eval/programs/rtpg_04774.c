int test_func(void) {
    int v0 = 52;
    int v1 = 80;
    int v2 = 9;
    int i;
    v2 = 43;
    v0 = v0 + v2;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

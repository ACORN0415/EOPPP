int test_func(void) {
    int v0 = 97;
    int v1 = 10;
    int v2 = 91;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

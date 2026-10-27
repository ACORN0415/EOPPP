int test_func(void) {
    int v0 = 90;
    int v1 = 39;
    int v2 = 69;
    int i;
    v2 = v2 - v1;
    v0 = 9;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

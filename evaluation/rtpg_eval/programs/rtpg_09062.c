int test_func(void) {
    int v0 = 92;
    int v1 = 98;
    int v2 = 93;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 - v1;
    v2 = 4;
    return v0;
}
int main(void) { return test_func(); }
